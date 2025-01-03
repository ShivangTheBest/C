#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);

    ptr ++;         //value of pointer increases by the number of bytes the data type (to which the pointer points) stores. If character pointer is increased, it increases by 1
    printf("The value of address of a, now is: %d\n", ptr);
    return 0;
}