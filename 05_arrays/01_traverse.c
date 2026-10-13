/* Initialize and traverse a one-dimensional array.
 * Based on: StringsNotes(1).pdf, page(s) 2.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={1,3,4,2,7,6};
    size_t n=sizeof(a)/sizeof(a[0]);
    for(size_t i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
