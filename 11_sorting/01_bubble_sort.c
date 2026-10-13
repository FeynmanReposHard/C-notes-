/* Sort values with adjacent comparisons and swaps.
 * Based on: SortingC11(1).pdf, page(s) bubble sort section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={5,1,4,2,8};
    int n=(int)(sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n-1;i++) {
        int swapped=0;
        for(int j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                int t=a[j];a[j]=a[j+1];a[j+1]=t;swapped=1;
            }
        }
        if(!swapped) break;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
