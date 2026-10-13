/* Calculate a small Fibonacci term recursively.
 * Based on: Recursion(1).pdf, page(s) recursion exercises.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static unsigned fib(unsigned n) {
    if(n<2) return n;
    return fib(n-1)+fib(n-2);
}
int main(void) {
    for(unsigned n=0;n<10;n++) printf("%u ",fib(n));
    putchar('\n');
    return 0;
}
