/* Read a line safely with fgets instead of deprecated gets.
 * Based on: StringsNotes(1).pdf, page(s) string input/output.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[64];
    printf("Enter your name: ");
    if(!fgets(name,sizeof(name),stdin)) return 1;
    name[strcspn(name,"\n")]='\0';
    printf("Hello, %s\n",name);
    return 0;
}
