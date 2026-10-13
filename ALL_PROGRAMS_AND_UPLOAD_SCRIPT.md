# All C examples — complete source code

40 independent C11 programs. Compiled with `-Wall -Wextra -Werror -pedantic`.

**Scope:** This is a verified curated subset; it is not an exhaustive conversion of the 511 PDF pages. See `SOURCE_PAGE_INDEX.md` and `ALL_SOURCE_EXTRACTED_TEXT.txt` for remaining material.

## `01_basics/01_hello_world.c`

Print a greeting using printf.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference 3.

```c
/* Print a greeting using printf.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 3.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    return 0;
}
```

## `01_basics/02_newlines.c`

Use the newline escape sequence.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference 4-6.

```c
/* Use the newline escape sequence.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 4-6.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    printf("Hello PW\n");
    printf("Hello CW\n");
    return 0;
}
```

## `01_basics/03_variables.c`

Declare, print and update an integer variable.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference 8-9.

```c
/* Declare, print and update an integer variable.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 8-9.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int x = 5;
    printf("Before: %d\n", x);
    x = x * 2;
    printf("After: %d\n", x);
    return 0;
}
```

## `01_basics/04_arithmetic.c`

Arithmetic and integer-division demonstration.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference 2, 7-12.

```c
/* Arithmetic and integer-division demonstration.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) 2, 7-12.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    printf("sum=%d difference=%d product=%d\n", a+b, a-b, a*b);
    printf("quotient=%d remainder=%d\n", a/b, a%b);
    return 0;
}
```

## `01_basics/05_input.c`

Use scanf and verify its return value.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Chapter 1: Taking Input.

```c
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
```

## `01_basics/06_type_casting.c`

Compare integer and floating division.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Chapter 1: float to int.

```c
/* Compare integer and floating division.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Chapter 1: float to int.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a = 7, b = 2;
    printf("integer division: %d\n", a/b);
    printf("floating division: %.2f\n", (double)a/b);
    printf("cast to int: %d\n", (int)3.99);
    return 0;
}
```

## `01_basics/07_ascii.c`

Show character and ASCII numeric code.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Chapter 1: Char and ASCII.

```c
/* Show character and ASCII numeric code.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Chapter 1: Char and ASCII.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char ch = 'A';
    printf("character=%c code=%d\n", ch, (unsigned char)ch);
    return 0;
}
```

## `02_control_flow/01_even_odd.c`

Decide whether an integer is even or odd.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Control-flow chapter.

```c
/* Decide whether an integer is even or odd.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Control-flow chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter integer: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n % 2 == 0) puts("Even");
    else puts("Odd");
    return 0;
}
```

## `02_control_flow/02_largest_three.c`

Select the largest of three integers.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Control-flow chapter.

```c
/* Select the largest of three integers.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Control-flow chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a=6,b=12,c=9;
    int max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    printf("Largest: %d\n", max);
    return 0;
}
```

## `02_control_flow/03_switch_calculator.c`

Use a switch statement for four arithmetic operations.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Control-flow chapter.

```c
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
```

## `03_loops/01_counting.c`

Print integers using a for loop.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Loops chapter.

```c
/* Print integers using a for loop.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Loops chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    for (int i=1;i<=10;i++) printf("%d ",i);
    putchar('\n');
    return 0;
}
```

## `03_loops/02_multiplication_table.c`

Generate the multiplication table of a number.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Loops chapter.

```c
/* Generate the multiplication table of a number.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Loops chapter.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int n=7;
    for(int i=1;i<=10;i++) printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}
```

## `03_loops/03_factorial_iterative.c`

Compute factorial iteratively (0 through 20).
Based on: Recursion(1).pdf, page/reference 2.

```c
/* Compute factorial iteratively (0 through 20).
 * Based on: Recursion(1).pdf, page(s) 2.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int n=5;
    unsigned long long result=1;
    for(int i=2;i<=n;i++) result *= (unsigned)i;
    printf("%d! = %llu\n",n,result);
    return 0;
}
```

## `04_functions/01_greet.c`

Define and call a void function repeatedly.
Based on: COneShotPart5(1).pdf, page/reference 4.

```c
/* Define and call a void function repeatedly.
 * Based on: COneShotPart5(1).pdf, page(s) 4.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static void greet(void) {
    puts("Good Morning");
    puts("How are you?");
}
int main(void) {
    for(int i=0;i<3;i++) greet();
    return 0;
}
```

## `04_functions/02_add.c`

Use return values and function parameters.
Based on: COneShotPart5(1).pdf, page/reference 9-10.

```c
/* Use return values and function parameters.
 * Based on: COneShotPart5(1).pdf, page(s) 9-10.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static int add(int a,int b) {
    return a+b;
}
int main(void) {
    printf("Sum = %d\n",add(3,4));
    return 0;
}
```

## `04_functions/03_square.c`

Implement a simple mathematical function.
Based on: COneShotPart5(1).pdf, page/reference 3.

```c
/* Implement a simple mathematical function.
 * Based on: COneShotPart5(1).pdf, page(s) 3.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static int square_plus_five(int x) {
    return x*x+5;
}
int main(void) {
    printf("f(3) = %d\n",square_plus_five(3));
    return 0;
}
```

## `05_arrays/01_traverse.c`

Initialize and traverse a one-dimensional array.
Based on: StringsNotes(1).pdf, page/reference 2.

```c
/* Initialize and traverse a one-dimensional array.
 * Based on: StringsNotes(1).pdf, page(s) 2.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={1,3,4,2,7,6};
    size_t n=sizeof(a)/sizeof(a[0]);
    for(size_t i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
```

## `05_arrays/02_reverse.c`

Reverse an array in place using two pointers.
Based on: SortingC11(1).pdf, page/reference 2-pointer section.

```c
/* Reverse an array in place using two pointers.
 * Based on: SortingC11(1).pdf, page(s) 2-pointer section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={1,2,3,4,5};
    size_t n=sizeof(a)/sizeof(a[0]);
    for(size_t i=0;i<n/2;i++) {
        int t=a[i];a[i]=a[n-1-i];a[n-1-i]=t;
    }
    for(size_t i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
```

## `05_arrays/03_duplicate_nested.c`

Find a duplicate with nested loops: O(n^2) time, O(1) space.
Based on: SortingC11(1).pdf, page/reference 3.

```c
/* Find a duplicate with nested loops: O(n^2) time, O(1) space.
 * Based on: SortingC11(1).pdf, page(s) 3.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={6,1,7,3,2,5,4,8,9,9,10};
    size_t n=sizeof(a)/sizeof(a[0]);
    for(size_t i=0;i<n;i++) {
        for(size_t j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                printf("Duplicate: %d\n",a[i]);
                return 0;
            }
        }
    }
    puts("No duplicate");
    return 0;
}
```

## `05_arrays/04_duplicate_sum.c`

Find one repeated integer from 1..n using arithmetic sum; requires exactly one extra occurrence.
Based on: SortingC11(1).pdf, page/reference 5.

```c
/* Find one repeated integer from 1..n using arithmetic sum; requires exactly one extra occurrence.
 * Based on: SortingC11(1).pdf, page(s) 5.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={6,1,7,3,2,5,4,8,9,9,10};
    size_t count=sizeof(a)/sizeof(a[0]);
    long long n=(long long)count-1,sum=0;
    for(size_t i=0;i<count;i++) sum+=a[i];
    printf("Repeated value: %lld\n",sum-n*(n+1)/2);
    return 0;
}
```

## `06_2d_arrays/01_print_matrix.c`

Print an initialized matrix with nested loops.
Based on: 2Darrays(1).pdf, page/reference 6-7.

```c
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
```

## `06_2d_arrays/02_transpose.c`

Print the transpose of a rectangular matrix.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference 2D arrays: transpose exercise.

```c
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
```

## `06_2d_arrays/03_matrix_sum.c`

Add two matrices elementwise.
Based on: 2Darrays(1).pdf, page/reference matrix exercises.

```c
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
```

## `07_strings/01_character_array.c`

Print a character array one character at a time.
Based on: StringsNotes(1).pdf, page/reference 6.

```c
/* Print a character array one character at a time.
 * Based on: StringsNotes(1).pdf, page(s) 6.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char a[]={'H','e','l','l','o',' ','W','o','r','l','d'};
    for(size_t i=0;i<sizeof(a);i++) putchar(a[i]);
    putchar('\n');
    return 0;
}
```

## `07_strings/02_null_terminator.c`

Demonstrate null-terminated C strings.
Based on: StringsNotes(1).pdf, page/reference 8-9.

```c
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
```

## `07_strings/03_string_library.c`

Demonstrate strlen, strcpy, strcat and strcmp.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference string library section.

```c
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
```

## `07_strings/04_reverse_string.c`

Reverse a writable string with index swapping.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference string reverse exercise.

```c
/* Reverse a writable string with index swapping.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) string reverse exercise.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[]="raghav";
    size_t n=strlen(s);
    for(size_t i=0;i<n/2;i++) {
        char t=s[i];s[i]=s[n-i-1];s[n-i-1]=t;
    }
    puts(s);
    return 0;
}
```

## `07_strings/05_read_line.c`

Read a line safely with fgets instead of deprecated gets.
Based on: StringsNotes(1).pdf, page/reference string input/output.

```c
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
```

## `08_pointers/01_address_dereference.c`

Demonstrate address-of and dereference operators.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Pointers section.

```c
/* Demonstrate address-of and dereference operators.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Pointers section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int x=42;
    int *p=&x;
    printf("value=%d through-pointer=%d\n",x,*p);
    *p=50;
    printf("updated=%d\n",x);
    return 0;
}
```

## `08_pointers/02_pointer_string.c`

Distinguish mutable arrays and pointers to read-only string literals.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference strings as pointers.

```c
/* Distinguish mutable arrays and pointers to read-only string literals.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) strings as pointers.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    char mutable[]="Physics Wallah";
    const char *literal="Physics Wallah";
    mutable[0]='M';
    literal="College Wallah"; /* Reassign pointer; do not modify literal. */
    printf("%s\n%s\n",mutable,literal);
    return 0;
}
```

## `08_pointers/03_swap.c`

Swap two integers using pointer parameters.
Based on: C in 10 Hours (1) 2.pdf(1).pdf, page/reference Pointers/functions section.

```c
/* Swap two integers using pointer parameters.
 * Based on: C in 10 Hours (1) 2.pdf(1).pdf, page(s) Pointers/functions section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static void swap(int *a,int *b) {
    int t=*a;*a=*b;*b=t;
}
int main(void) {
    int x=10,y=20;
    swap(&x,&y);
    printf("x=%d y=%d\n",x,y);
    return 0;
}
```

## `09_recursion/01_factorial.c`

Compute factorial using a recursive base case.
Based on: Recursion(1).pdf, page/reference 3-6.

```c
/* Compute factorial using a recursive base case.
 * Based on: Recursion(1).pdf, page(s) 3-6.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static unsigned long long factorial(unsigned n) {
    if(n<=1) return 1ULL; /* Stops recursive calls. */
    return n*factorial(n-1);
}
int main(void) {
    unsigned n=5; /* Keep n <= 20 to avoid overflow. */
    printf("%u! = %llu\n",n,factorial(n));
    return 0;
}
```

## `09_recursion/02_descending.c`

Print n down to 1 with recursion.
Based on: Recursion(1).pdf, page/reference 7.

```c
/* Print n down to 1 with recursion.
 * Based on: Recursion(1).pdf, page(s) 7.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static void descending(int n) {
    if(n<1) return;
    printf("%d ",n);
    descending(n-1);
}
int main(void) {
    descending(7);
    putchar('\n');
    return 0;
}
```

## `09_recursion/03_fibonacci.c`

Calculate a small Fibonacci term recursively.
Based on: Recursion(1).pdf, page/reference recursion exercises.

```c
/* Calculate a small Fibonacci term recursively.
 * Based on: Recursion(1).pdf, page(s) recursion exercises.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

static unsigned fib(unsigned n) {
    if(n<2) return n;
    return fib(n-1)+fib(n-2);
}
int main(void) {
    for(unsigned n=0;n<10;n++) printf("%u ",fib(n));
    putchar('\n');
    return 0;
}
```

## `10_structures/01_employee.c`

Group employee attributes into a structure.
Based on: Structures(1).pdf, page/reference 2.

```c
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
```

## `10_structures/02_pokemon.c`

Create two struct values and access their members.
Based on: Structures(1).pdf, page/reference 4-5.

```c
/* Create two struct values and access their members.
 * Based on: Structures(1).pdf, page(s) 4-5.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

struct Pokemon {
    int hp,speed,attack;
};
int main(void) {
    struct Pokemon pikachu={50,100,60};
    struct Pokemon charizard={80,80,130};
    printf("Pikachu attack: %d\nCharizard attack: %d\n",
           pikachu.attack,charizard.attack);
    return 0;
}
```

## `10_structures/03_students.c`

Use an array of structures for student records.
Based on: Structures(1).pdf, page/reference 3, 6-8.

```c
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
```

## `11_sorting/01_bubble_sort.c`

Sort values with adjacent comparisons and swaps.
Based on: SortingC11(1).pdf, page/reference bubble sort section.

```c
/* Sort values with adjacent comparisons and swaps.
 * Based on: SortingC11(1).pdf, page(s) bubble sort section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={5,1,4,2,8};
    int n=(int)(sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n-1;i++) {
        int swapped=0;
        for(int j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                int t=a[j];a[j]=a[j+1];a[j+1]=t;swapped=1;
            }
        }
        if(!swapped) break;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
```

## `11_sorting/02_selection_sort.c`

Sort by selecting the smallest item in the unsorted suffix.
Based on: SortingC11(1).pdf, page/reference selection sort section.

```c
/* Sort by selecting the smallest item in the unsorted suffix.
 * Based on: SortingC11(1).pdf, page(s) selection sort section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={64,25,12,22,11};
    int n=(int)(sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j;
        int t=a[i];a[i]=a[min];a[min]=t;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
```

## `11_sorting/03_insertion_sort.c`

Build a sorted prefix by inserting elements into position.
Based on: SortingC11(1).pdf, page/reference insertion sort section.

```c
/* Build a sorted prefix by inserting elements into position.
 * Based on: SortingC11(1).pdf, page(s) insertion sort section.
 * Independent classroom demonstration, revised for C11.
 */
#include <stdio.h>

int main(void) {
    int a[]={12,11,13,5,6};
    int n=(int)(sizeof(a)/sizeof(a[0]));
    for(int i=1;i<n;i++) {
        int key=a[i],j=i-1;
        while(j>=0 && a[j]>key) {a[j+1]=a[j];j--;}
        a[j+1]=key;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
```

# GitHub automation script

Install `requests`, set `GITHUB_TOKEN`, then run `python upload_to_github.py`. Full instructions in README.md.

```python
#!/usr/bin/env python3
"""Create/populate C-Language-Notes-Masterclass via GitHub REST API.
Install: python -m pip install requests
Set environment variable GITHUB_TOKEN before running.
This script never prints your token.
"""
import os, sys, time, base64
from pathlib import Path
import requests

REPO_NAME = "C-Language-Notes-Masterclass"
ROOT = Path(__file__).resolve().parent
TOKEN = os.environ.get("GITHUB_TOKEN", "").strip()
if not TOKEN:
    sys.exit("Set GITHUB_TOKEN first. See README.md.")
SESSION = requests.Session()
SESSION.headers.update({"Authorization": f"Bearer {TOKEN}",
 "Accept": "application/vnd.github+json", "X-GitHub-Api-Version": "2022-11-28",
 "User-Agent": "c-masterclass-upload"})
API = "https://api.github.com"

def request(method, url, **kwargs):
    for attempt in range(4):
        try:
            response = SESSION.request(method, url, timeout=35, **kwargs)
        except requests.RequestException as exc:
            if attempt == 3: sys.exit(f"Network error: {exc}")
            time.sleep(2 ** attempt)
            continue
        if response.status_code in (429, 500, 502, 503, 504) and attempt < 3:
            time.sleep(2 ** attempt)
            continue
        return response
    sys.exit("GitHub request failed repeatedly.")

me = request("GET", API + "/user")
if me.status_code != 200:
    sys.exit(f"Authentication failed ({me.status_code}): {me.text[:300]}")
owner = me.json()["login"]
repo_url = f"{API}/repos/{owner}/{REPO_NAME}"
existing = request("GET", repo_url)
if existing.status_code == 404:
    created = request("POST", API + "/user/repos", json={
      "name": REPO_NAME, "description": "Runnable C programs grounded in programming notes",
      "private": True, "auto_init": True})
    if created.status_code != 201:
        sys.exit(f"Could not create repository ({created.status_code}): {created.text[:500]}")
    print(f"Created private repository {owner}/{REPO_NAME}")
elif existing.status_code == 200:
    print(f"Repository {owner}/{REPO_NAME} exists; checking files for updates")
else:
    sys.exit(f"Repository lookup failed ({existing.status_code}): {existing.text[:500]}")

items = sorted(p for p in ROOT.rglob('*') if p.is_file() and p.name != Path(__file__).name
               and '.git' not in p.parts and p.suffix not in ('.zip', '.pdf', '.exe'))
for index, path in enumerate(items, 1):
    relative = path.relative_to(ROOT).as_posix()
    target = f"{repo_url}/contents/{relative}"
    check = request("GET", target)
    if check.status_code not in (200, 404):
        sys.exit(f"Cannot check {relative}: {check.status_code} {check.text[:200]}")
    old_sha = check.json().get('sha') if check.status_code == 200 else None
    payload = {"message": f"Add/update {relative}",
               "content": base64.b64encode(path.read_bytes()).decode("ascii")}
    if old_sha:
        payload['sha'] = old_sha
    upload = request("PUT", target, json=payload)
    if upload.status_code not in (200, 201):
        sys.exit(f"Failed at {relative} ({upload.status_code}): {upload.text[:500]}")
    print(f"[{index}/{len(items)}] {'Updated' if old_sha else 'Uploaded'} {relative}")
print(f"Done: https://github.com/{owner}/{REPO_NAME}")
```
