/* Use an array of structures for student records.
 * Based on: Structures(1).pdf, page(s) 3, 6-8.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

struct Student {
    int roll;
    char grade;
    float percentage;
};
int main(void) {
    struct Student students[]={{45,'B',90.0f},{56,'A',85.5f}};
    for(size_t i=0;i<sizeof(students)/sizeof(students[0]);i++) {
        printf("Roll=%d Grade=%c Percentage=%.1f\n",
               students[i].roll,students[i].grade,students[i].percentage);
    }
    return 0;
}
