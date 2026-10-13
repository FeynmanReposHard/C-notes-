/* Add two matrices elementwise.
 * Based on: 2Darrays(1).pdf, page(s) matrix exercises.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}};
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) printf("%d ",a[i][j]+b[i][j]);
        putchar('\n');
    }
    return 0;
}
