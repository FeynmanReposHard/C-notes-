/* Show character and ASCII numeric code.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Chapter 1: Char and ASCII.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char ch = 'A';
    printf("character=%c code=%d\n", ch, (unsigned char)ch);
    return 0;
}
