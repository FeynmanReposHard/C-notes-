/* Reverse an array in place using two pointers.
 * Based on: SortingC11(1).pdf, page(s) 2-pointer section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={1,2,3,4,5};
    size_t n=sizeof(a)/sizeof(a[0]);
    for(size_t i=0;i<n/2;i++) {
        int t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;
    }
    for(size_t i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
