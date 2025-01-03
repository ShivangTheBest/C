// Conversion of temperature from Celsius to Fahrenheit

#include <stdio.h>

int main()
{
    float t;
    float t1;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &t);

    t1 = t * 9 / 5 + 32;
    printf("The temperature in Fahrenheit is: %f", t1);

    return 0;
}

// Calculating the volume of a cylinder with radius and height as input from user.

#include <stdio.h>
#include <math.h>

int main()
{
    float r, h;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    float v = 31.14159 * r * r * h;
    // M_PI is a constant in math.h library which is equal to pie.

    printf("The volume of the cylinder is: %f", v);

    return 0;
}