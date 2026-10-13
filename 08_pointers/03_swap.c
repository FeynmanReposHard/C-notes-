/* Swap two integers using pointer parameters.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Pointers/functions section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static void swap(int *a,int *b) {
    int t=*a;*a=*b;*b=t;
}
int main(void) {
    int x=10,y=20;
    swap(&x,&y);
    printf("x=%d y=%d\n",x,y);
    return 0;
}
