/* Compare integer and floating division.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Chapter 1: float to int.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a = 7, b = 2;
    printf("integer division: %d\n", a/b);
    printf("floating division: %.2f\n", (double)a/b);
    printf("cast to int: %d\n", (int)3.99);
    return 0;
}
