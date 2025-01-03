#include <stdio.h>

int main() {
    printf("The value of 6 + 5 is %d\n", 6 + 5);              //returns integer
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);          //returns float
    printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);      //returns float
    printf("5 divided by 2 is: %d\n", 5 / 2);                 //returns integer 
    printf("5.0 divided by 2 is: %f\n", 5 / 2.0);             //returns float
    return 0;
}

// int a = 3.5; In this case 3.5 will be converted to 3 and then stored in a, because a can only store integer values.
// float b = 8; In this case 8 will be converted to 8.0 and then stored in b, because b can store float values.
// float c = 3/9; In this case 3/9 will be calculated first and then the result will be stored in c, because c can store float values.

// Basically, agar ek bhi value float hai toh result bhi float hi hoga.