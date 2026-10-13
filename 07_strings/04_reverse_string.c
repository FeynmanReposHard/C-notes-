/* Reverse a writable string with index swapping.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) string reverse exercise.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[]="raghav";
    size_t n=strlen(s);
    for(size_t i=0;i<n/2;i++) {
        char t=s[i];s[i]=s[n-i-1];s[n-i-1]=t;
    }
    puts(s);
    return 0;
}
