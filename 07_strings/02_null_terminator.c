/* Demonstrate null-terminated C strings.
 * Based on: StringsNotes(1).pdf, page(s) 8-9.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char text[]={'C','o','d','e','\0'};
    printf("%s\n",text);
    printf("Storage bytes: %zu\n",sizeof(text));
    return 0;
}
