/* Demonstrate address-of and dereference operators.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Pointers section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int x=42;
    int *p=&x;
    printf("value=%d through-pointer=%d\n",x,*p);
    *p=50;
    printf("updated=%d\n",x);
    return 0;
}
