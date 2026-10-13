#!/usr/bin/env python3
"""Create/populate C-Language-Notes-Masterclass via GitHub REST API.
Install: python -m pip install requests
Set environment variable GITHUB_TOKEN before running.
This script never prints your token.
"""
import os, sys, time, base64
from pathlib import Path
import requests

REPO_NAME = "C-Language-Notes-Masterclass"
ROOT = Path(__file__).resolve().parent
TOKEN = os.environ.get("GITHUB_TOKEN", "").strip()
if not TOKEN:
    sys.exit("Set GITHUB_TOKEN first. See README.md.")
SESSION = requests.Session()
SESSION.headers.update({"Authorization": f"Bearer {TOKEN}",
 "Accept": "application/vnd.github+json", "X-GitHub-Api-Version": "2022-11-28",
 "User-Agent": "c-masterclass-upload"})
API = "https://api.github.com"

def request(method, url, **kwargs):
    for attempt in range(4):
        try:
            response = SESSION.request(method, url, timeout=35, **kwargs)
        except requests.RequestException as exc:
            if attempt == 3: sys.exit(f"Network error: {exc}")
            time.sleep(2 ** attempt)
            continue
        if response.status_code in (429, 500, 502, 503, 504) and attempt < 3:
            time.sleep(2 ** attempt)
            continue
        return response
    sys.exit("GitHub request failed repeatedly.")

me = request("GET", API + "/user")
if me.status_code != 200:
    sys.exit(f"Authentication failed ({me.status_code}): {me.text[:300]}")
owner = me.json()["login"]
repo_url = f"{API}/repos/{owner}/{REPO_NAME}"
existing = request("GET", repo_url)
if existing.status_code == 404:
    created = request("POST", API + "/user/repos", json={
      "name": REPO_NAME, "description": "Runnable C programs grounded in programming notes",
      "private": True, "auto_init": True})
    if created.status_code != 201:
        sys.exit(f"Could not create repository ({created.status_code}): {created.text[:500]}")
    print(f"Created private repository {owner}/{REPO_NAME}")
elif existing.status_code == 200:
    print(f"Repository {owner}/{REPO_NAME} exists; checking files for updates")
else:
    sys.exit(f"Repository lookup failed ({existing.status_code}): {existing.text[:500]}")

items = sorted(p for p in ROOT.rglob('*') if p.is_file() and p.name != Path(__file__).name
               and '.git' not in p.parts and p.suffix not in ('.zip', '.pdf', '.exe'))
for index, path in enumerate(items, 1):
    relative = path.relative_to(ROOT).as_posix()
    target = f"{repo_url}/contents/{relative}"
    check = request("GET", target)
    if check.status_code not in (200, 404):
        sys.exit(f"Cannot check {relative}: {check.status_code} {check.text[:200]}")
    old_sha = check.json().get('sha') if check.status_code == 200 else None
    payload = {"message": f"Add/update {relative}",
               "content": base64.b64encode(path.read_bytes()).decode("ascii")}
    if old_sha:
        payload['sha'] = old_sha
    upload = request("PUT", target, json=payload)
    if upload.status_code not in (200, 201):
        sys.exit(f"Failed at {relative} ({upload.status_code}): {upload.text[:500]}")
    print(f"[{index}/{len(items)}] {'Updated' if old_sha else 'Uploaded'} {relative}")
print(f"Done: https://github.com/{owner}/{REPO_NAME}")
