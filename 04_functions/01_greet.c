/* Define and call a void function repeatedly.
 * Based on: COneShotPart5(1).pdf, page(s) 4.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static void greet(void) {
    puts("Good Morning");
    puts("How are you?");
}
int main(void) {
    for(int i=0;i<3;i++) greet();
    return 0;
}
