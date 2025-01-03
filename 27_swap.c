#include <stdio.h>

// Function prototype
void swap(int *x, int *y);

int main() {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Call the function and pass the addresses of a and b
    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition
void swap(int *x, int *y) {
    int temp;
    temp = *x; // Dereference x to get the value of a
    *x = *y;   // Dereference y to get the value of b and assign it to a
    *y = temp; // Assign the value of temp to b
}


/*  SWAPPING THE VALUES
a , b

temp = a          *Saving the value of a in a new var.
a = b             *Saving b in place of a.
b = temp          *Saving temp (a) in place of b.

*/