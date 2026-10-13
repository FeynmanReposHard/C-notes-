/* Implement a simple mathematical function.
 * Based on: COneShotPart5(1).pdf, page(s) 3.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static int square_plus_five(int x) {
    return x*x+5;
}
int main(void) {
    printf("f(3) = %d\n",square_plus_five(3));
    return 0;
}
