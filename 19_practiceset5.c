// Write a code to calculate nth element of the Fibonacci series.

#include <stdio.h>

int fib(int);

int fib(int t)
{
    if (t < 1)
    {
        printf("error. term number can not be positive");
        return -1;
    }
    else if (t == 1)
    {
        return 0;
    }
    else if (t == 2 || t == 3)
    {
        return 1;
    }
    else
    {
        return fib(t - 1) + fib(t - 2);
    }
}

int main()
{
    int t;
    printf("Enter which term of Fibonacci series you want to find out:\n");
    scanf("%d", &t);

    int res = fib(t);
    printf("The (%d)th of the Fibonacci series is: \n%d", t, res);
    return 0;
}

// What will the following line produce in a C program?
//              printf("%d %d %d\n", a, ++a, a++)

/* Answer: The reason is that the order of evaluation of the arguments in a function call is not defined. In the above line, the value of 'a' is being modified more than once between two sequence points. This results in undefined behavior. The output can vary depending on the compiler and optimization level. It is not recommended to write such code as it can lead to unexpected results.
For example if a = 4, then the output can be 4 5 5 or 5 5 4 or 5 4 5 or 4 4 5 or 5 4 4 or 4 5 4 or 4 5 5 or 5 5 4. If we run here, it shows 6 6 4. This is because the order of evaluation here is from right to left. Hence, first the value of a is printed (4, this is rightmost reading), then it is incremented by 1 and then the incremented value is again increased & printed (6, this is the middle reading), and lastly the value of a (which by the way is ++a now) is printed (6, this is the leftmost value).
*/

// Write a program using functions to print the following pattern (first n lines):
//     *
//     ***
//     *****

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of lines to print: ");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i ++)
    {
        for(j = 1 ; j <= 2*i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}