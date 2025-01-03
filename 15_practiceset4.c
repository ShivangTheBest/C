// To print the multiplication table of a number in reverse order.

#include <stdio.h>

int main()
{
    int a, n = 10;
    printf("Enter any number: ");
    scanf("%d", &a);

    printf("The multiplication table in reverse, of %d is as follows:\n", a);

    for(n = 10 ; n > 0 ; n --)
    {
        printf("%d\n", a * n);
    }
    return 0;
}


// Write a program to sum first 10 natural numbers.

#include <stdio.h>
 
int main()
{
    int sum = 0, d;
    for(d = 0 ; d <= 10 ; d ++)
    {
        sum += d; // This actually means [sum = sum + d]
    }
    printf("%d\n", sum );
    return 0;
}
/*In C, any code placed after the 'for' loop will only execute once the loop has completed all its iterations and loop's conditions is no longer met. */


// Write a program to print the factorial of an arbitrary number. 

#include <stdio.h>

int main()
{
    int a, d;
    
    printf("Enter any number: ");
    scanf("%d", &a);

    for(d = a - 1 ; d > 0 ; d --)
    {
        a *= d  ; // This actually means [a = a * d]
    }
    printf("%d", a);
    return 0;
}


// Write code to calculate the sum of all numbers appearing in the multiplication table of any number..

#include <stdio.h>

int main()
{
    int a, i, sum;
    printf("Enter any number: ");
    scanf("%d", &a);

    for(i = 1 ; i <= 10 ; i ++)
    {
        sum += a * i; // This actually means [sum = sum + (a * i)]
    }
    printf("%d", sum);
    return 0;
}


// Write a program to check whether a given number is prime or not using for loop. {A prime number(n) is a number is not divisible by numbers lying between 2 and sqrt(n)}.

#include <stdio.h>

int main()
{
    int a, i, rem;
    printf("Enter any number: ");
    scanf("%d", &a);

    for(i = 2 ; i < a - 1 ; i ++)
    {
        rem = a % i; // rem is updated with the new remainder value in each iteration
        if(rem != 0)
        {
            continue; // If rem is not 0, continue to the next iteration
        }
        else
        {
            break; // If rem is 0, break out of the loop
        }
    }
    
    if(rem != 0)
    {
        printf("Entered number is a prime number.");
    }
    else
    {
        printf("Entered number is divisible by %d.\nHence the number is composite, and not prime.", i);
    }

    return 0;
}