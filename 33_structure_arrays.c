#include <stdio.h>

struct employee

{
    int code;
    float salary;
    char name[10];
}; 

int main()
{
    struct employee facebook[100];     //->Array of structures
    //We can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;

    // Print the employee details
    for (int i = 0; i < 2; i++) {
        printf("Employee %d Code: %d\n", i, facebook[i].code);
    }
    return 0;
}