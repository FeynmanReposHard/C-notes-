/* Find one repeated integer from 1..n using arithmetic sum; requires exactly one extra occurrence.
 * Based on: SortingC11(1).pdf, page(s) 5.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={6,1,7,3,2,5,4,8,9,9,10};
    size_t count=sizeof(a)/sizeof(a[0]);
    long long n=(long long)count-1,sum=0;
    for(size_t i=0;i<count;i++) sum+=a[i];
    printf("Repeated value: %lld\n",sum-n*(n+1)/2);
    return 0;
}
