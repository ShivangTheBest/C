// A pointer is a variable which stores the address of another variable.

#include <stdio.h>

int main()
{
    int i = 72;       // Declare an integer variable i and initialize it to 72
    int *j = &i;      // Declare a pointer variable j and initialize it to the address of i
    
    printf("The value of i is %d\n", i);     // Output the value of i (72)
    printf("The value of i is %d\n", *j);    // Output the value at the address stored in j (72)
    printf("The address of i is %u\n", &i);   // Output the address of i
    printf("The address stored in j is %u\n", j);     // Output the address stored in j (same as the address of i)
    
    return 0;
}
// * puchta hai kya value hai, aur & puchta hai kya address hai.
// * is known as 'value at address' operator.

#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i;

    float k = 555;
    float *l = &k;
    return 0;
}
// Note that the format of address must be the same as format of the value stored.
