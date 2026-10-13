# C Language Notes Masterclass

Clean standalone C11 teaching examples, organized by topic, with a page-by-page index of seven supplied PDFs. The code samples are **curated reconstructions**, not a complete automated transcription of all exercises, fragments and diagrams. See `SOURCE_PAGE_INDEX.md` for all 511 pages and `PROGRAM_INDEX.md` for the coded subset.

## Compile and run

```bash
gcc -std=c11 -Wall -Wextra -pedantic 01_basics/01_hello_world.c -o hello
./hello
```

On Windows PowerShell, run `./hello.exe` after compilation (or `\.\hello.exe` as appropriate).

## Automatically create a GitHub repository and upload everything

1. In GitHub open **Settings > Developer settings > Personal access tokens > Fine-grained tokens > Generate new token**.
2. Select your own account as resource owner. For creating a new repository, grant appropriate repository creation permission and **Contents: Read and write**; token permission controls differ for fine-grained vs classic PATs. If GitHub does not allow creating repositories with the fine-grained token you selected, use a classic PAT with **repo** scope instead or create the empty repository in the GitHub UI first.
3. Do not paste your token in source files, screenshots, or chat. Set an environment variable in your terminal:

Windows PowerShell (current session):
```powershell
$env:GITHUB_TOKEN="github_pat_YOUR_TOKEN_HERE"
python -m pip install -r requirements.txt
python upload_to_github.py
Remove-Item Env:GITHUB_TOKEN
```

macOS/Linux:
```bash
export GITHUB_TOKEN="github_pat_YOUR_TOKEN_HERE"
python3 -m pip install -r requirements.txt
python3 upload_to_github.py
unset GITHUB_TOKEN
```

The uploader creates **a private repository** named `C-Language-Notes-Masterclass` by default, or updates the repository if it already exists. It uses the GitHub REST contents API, so each file is pushed in an individual commit. A created repository belongs to the authenticated account. Never commit the token. Make repository public manually later only after reviewing file contents and licensing/ownership.

## Verification

Every supplied `.c` file is compiled separately with GCC if GCC is available. `COMPILE_REPORT.md` contains results. There are no file-I/O examples in this checked set because no specific file-I/O lesson was confirmed in the source inventory; it would be misleading to label invented programs as PDF extractions.
