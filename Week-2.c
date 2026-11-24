
EXPERIMENT 1: PRINTING DIFFERENT VALUES

Aim:
Write a C program to print a simple text, integer value, float value, character, mixed values, text values, expression result and escape sequence characters.

Program:
#include <stdio.h>
#include <conio.h>

int main()
{
    printf("PRAGATI\n");
    printf("%d\n", 10);
    printf("%f\n", 9.90);
    printf("%c\n", 'A');
    printf("%d %d %c\n", 10, 9, 'P');
    printf("Number is: %d\n", 70);
    printf("A+B*C+D\n");
    printf("%d\n", 2+3+5);
    printf("PRAGATI\b\b\rUNIVERSITY");
    getch();
    return 0;
}

Output:
PRAGATI
10
9.900000
A
10 9 P
Number is: 70
A+B*C+D
10
UNIVERSITY


EXPERIMENT 2: READ TWO INTEGER VALUES

Aim:
Write a C program to read two integer values and display them.

Program:
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;
    clrscr();

    printf("Enter x and y values: ");
    scanf("%d %d", &x, &y);

    printf("x value is: %d\n", x);
    printf("y value is: %d\n", y);

    getch();
    return 0;
}

Output:
Enter x and y values: 18 11
x value is: 18
y value is: 11


EXPERIMENT 3: READ INTEGER, CHARACTER AND FLOAT VALUES

Aim:
Write a C program to read one integer value, one character and one float value and display them.

Program:
#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    char a;
    float b;

    clrscr();

    printf("Enter x, a and b values: ");
    scanf("%d %c %f", &x, &a, &b);

    printf("x value is: %d\n", x);
    printf("a value is: %c\n", a);
    printf("b value is: %f\n", b);

    getch();
    return 0;
}

Output:
Enter x, a and b values: 5 P 18.1
x value is: 5
a value is: P
b value is: 18.100000


EXPERIMENT 4: ARITHMETIC OPERATORS

Aim:
Write a C program to implement arithmetic operators (+, -, *, /, %).

Program:
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, add, sub, mul, div, mod;
    clrscr();

    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("Add value is: %d\n", add);
    printf("Sub value is: %d\n", sub);
    printf("Mul value is: %d\n", mul);
    printf("Div value is: %d\n", div);
    printf("Mod value is: %d\n", mod);

    getch();
    return 0;
}

Output:
Enter a and b values: 10 20
Add value is: 30
Sub value is: -10
Mul value is: 200
Div value is: 0
Mod value is: 10


EXPERIMENT 5: TOTAL AND AVERAGE OF THREE SUBJECTS

Aim:
Write a C program to read three subjects marks and find total and average score.

Program:
#include <stdio.h>
#include <conio.h>

int main()
{
    int m1, m2, m3, tot;
    float avg;

    clrscr();

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    tot = m1 + m2 + m3;
    avg = tot / 3.0;

    printf("Total value is: %d\n", tot);
    printf("Average value is: %.2f\n", avg);

    getch();
    return 0;
}

Output:
Enter marks of three subjects: 80 70 90
Total value is: 240
Average value is: 80.00
