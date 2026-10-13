/* Print n down to 1 with recursion.
 * Based on: Recursion(1).pdf, page(s) 7.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static void descending(int n) {
    if(n<1) return;
    printf("%d ",n);
    descending(n-1);
}
int main(void) {
    descending(7);
    putchar('\n');
    return 0;
}
