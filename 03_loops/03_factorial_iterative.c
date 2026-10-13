/* Compute factorial iteratively (0 through 20).
 * Based on: Recursion(1).pdf, page(s) 2.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int n=5;
    unsigned long long result=1;
    for(int i=2;i<=n;i++) result *= (unsigned)i;
    printf("%d! = %llu\n",n,result);
    return 0;
}
