/* Compute factorial using a recursive base case.
 * Based on: Recursion(1).pdf, page(s) 3-6.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static unsigned long long factorial(unsigned n) {
    if(n<=1) return 1ULL; /* Stops recursive calls. */
    return n*factorial(n-1);
}
int main(void) {
    unsigned n=5; /* Keep n <= 20 to avoid overflow. */
    printf("%u! = %llu\n",n,factorial(n));
    return 0;
}
