/* Generate the multiplication table of a number.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Loops chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int n=7;
    for(int i=1;i<=10;i++) printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}
