/* Declare, print and update an integer variable.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 8-9.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int x = 5;
    printf("Before: %d\n", x);
    x = x * 2;
    printf("After: %d\n", x);
    return 0;
}
