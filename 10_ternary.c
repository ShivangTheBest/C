/*
A short-hand if-else statement is called a ternary operator. It is used to replace multiple lines of code with a single line. It is also known as the conditional operator. The syntax of the ternary operator is as follows: 
condition ? expression-if-true : expression-if-false;
*/

// Example codes:

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number a: ");
    scanf("%d", &a);

    printf("Enter the second number b: ");
    scanf("%d", &b);

    (a > b) ? printf("a is greater than b") : printf("a is smaller than b");
    return 0;
}