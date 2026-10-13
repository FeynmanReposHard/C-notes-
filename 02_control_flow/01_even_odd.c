/* Decide whether an integer is even or odd.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Control-flow chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter integer: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n % 2 == 0) puts("Even");
    else puts("Odd");
    return 0;
}
