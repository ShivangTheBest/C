// A pointer is a variable which stores the address of another variable.

#include <stdio.h>

int main()
{
    int i = 72;
    printf("The address of i is: \n%p\n", &i);
    printf("The address of i is: \n%u\n", &i);   //%u stands for unsigned integer.

    int* j = &i;   //j is the address of i.
    printf("The address of i is:\n%d", j);
    return 0;
}
// * puchta hai kya value hai, aur & puchta hai kya address hai.
// * is known as 'value at address' operator.

#include <stdio.h>

int main()
{
    char i = 'A';
    char* j = &i;

    float k = 555;
    float* l = &k;
    return 0;
}
// Note that the format of address must be the same as format of the value stored.