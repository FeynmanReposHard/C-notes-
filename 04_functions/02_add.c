/* Use return values and function parameters.
 * Based on: COneShotPart5(1).pdf, page(s) 9-10.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static int add(int a,int b) {
    return a+b;
}
int main(void) {
    printf("Sum = %d\n",add(3,4));
    return 0;
}
