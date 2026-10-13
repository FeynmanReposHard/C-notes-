/* Print the transpose of a rectangular matrix.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 2D arrays: transpose exercise.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[2][3]={{1,2,3},{4,5,6}};
    for(int col=0;col<3;col++) {
        for(int row=0;row<2;row++) printf("%d ",a[row][col]);
        putchar('\n');
    }
    return 0;
}
