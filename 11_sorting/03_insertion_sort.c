/* Build a sorted prefix by inserting elements into position.
 * Based on: SortingC11(1).pdf, page(s) insertion sort section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={12,11,13,5,6};
    int n=(int)(sizeof(a)/sizeof(a[0]));
    for(int i=1;i<n;i++) {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key) {a[j+1]=a[j];j--;}
        a[j+1]=key;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
