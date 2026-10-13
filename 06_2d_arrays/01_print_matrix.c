/* Print an initialized matrix with nested loops.
 * Based on: 2Darrays(1).pdf, page(s) 6-7.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[2][3]={{10,9,8},{7,6,5}};
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) printf("%3d",a[i][j]);
        putchar('\n');
    }
    return 0;
}
