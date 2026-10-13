/* Distinguish mutable arrays and pointers to read-only string literals.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) strings as pointers.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char mutable[]="Physics Wallah";
    const char *literal="Physics Wallah";
    mutable[0]='M';
    literal="College Wallah"; /* Reassign pointer; do not modify literal. */
    printf("%s\n%s\n",mutable,literal);
    return 0;
}
