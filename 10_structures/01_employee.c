/* Group employee attributes into a structure.
 * Based on: Structures(1).pdf, page(s) 2.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

struct Employee {
    int id;
    char name[32];
    double salary;
};
int main(void) {
    struct Employee e={874,"Rohan",80000.78};
    printf("%d %s %.2f\n",e.id,e.name,e.salary);
    return 0;
}
