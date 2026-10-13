/* Use scanf and verify its return value.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Chapter 1: Taking Input.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Sum = %d\n", a + b);
    return 0;
}
