/* Use a switch statement for four arithmetic operations.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Control-flow chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    double a=12.0,b=4.0;
    char op='/';
    switch(op) {
        case '+': printf("%.2f\n",a+b);break;
        case '-': printf("%.2f\n",a-b);break;
        case '*': printf("%.2f\n",a*b);break;
        case '/': if(b==0) return 1; printf("%.2f\n",a/b);break;
        default: puts("Invalid operator");return 1;
    }
    return 0;
}
