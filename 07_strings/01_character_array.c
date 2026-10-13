/* Print a character array one character at a time.
 * Based on: StringsNotes(1).pdf, page(s) 6.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char a[]={'H','e','l','l','o',' ','W','o','r','l','d'};
    for(size_t i=0;i<sizeof(a);i++) putchar(a[i]);
    putchar('\n');
    return 0;
}
