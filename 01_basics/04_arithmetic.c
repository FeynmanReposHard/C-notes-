/* Arithmetic and integer-division demonstration.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 2, 7-12.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    printf("sum=%d difference=%d product=%d\n", a+b, a-b, a*b);
    printf("quotient=%d remainder=%d\n", a/b, a%b);
    return 0;
}
