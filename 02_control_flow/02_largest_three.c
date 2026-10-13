/* Select the largest of three integers.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Control-flow chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a=6,b=12,c=9;
    int max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    printf("Largest: %d\n", max);
    return 0;
}
