/*
 * Call by Reference in C
 
 * In C, call by reference allows a function to modify the actual values of the arguments.
 * This is achieved by passing the addresses (pointers) of the variables to the function.
*/


#include <stdio.h>

int sum(int* a, int* b)  // Function definition
{
    *a = 6; // Modify the value at the address pointed to by a
    return (*a + *b); // Return the sum of the values pointed to by a and b
}

int main() {
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y)); // Pass the addresses of x and y
    printf("The value of x is %d\n", x); // Print the modified value of x
    return 0;
}
