/* Demonstrate strlen, strcpy, strcat and strcmp.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) string library section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[64]="Hello";
    printf("length: %zu\n",strlen(text));
    strcat(text," C");
    printf("combined: %s\n",text);
    char copy[64];
    strcpy(copy,text);
    printf("compare: %d\n",strcmp(copy,text));
    return 0;
}
