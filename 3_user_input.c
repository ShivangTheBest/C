// Before Using a part of this code, make sure to comment out the rest of the code.

// &a is known as address of a.

#include <stdio.h>

int main()
{
    // First we have to specify the format of variables we are using.
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    // %d is to specify that it is an integer.
    // &a is used to store the input value in a.

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("The product of a, b, c is %d", a * b * c);

    return 0;
}

// Calculating the area of a circle, taking radius input from user.

#include <stdio.h>

int main()
{
    int r;
    float a;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    a = 3.14 * r * r;

    printf("The area of the circle is: %f", a);
    return 0;
}