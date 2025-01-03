#include <stdio.h>

int fact(int);

int fact(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return fact(x - 1) * x;
    }
}

int main()
{
    int a = 5;
    printf("The factorial of 5 is\n%d", fact(5));
    return 0;
}