/* Find a duplicate with nested loops: O(n^2) time, O(1) space.
 * Based on: SortingC11(1).pdf, page(s) 3.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={6,1,7,3,2,5,4,8,9,9,10};
    size_t n=sizeof(a)/sizeof(a[0]);
    for(size_t i=0;i<n;i++) {
        for(size_t j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                printf("Duplicate: %d\n",a[i]);
                return 0;
            }
        }
    }
    puts("No duplicate");
    return 0;
}
