/*
 Basics of Loops in C

 Loops are used to execute a block of code repeatedly.
 There are three types of loops in C:
 1. for loop
 2. while loop 
 3. do-while loop

 Syntax and examples:

 1. while loop:
    while (condition) {
        // code to be executed
    }

  * Example:
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

 2. do-while loop:
    do 
    {
        // code to be executed
    } while (condition);

  * Example:
    int i = 0;
    do 
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);
 3. for loop:
    for (initialization; condition; increment/decrement)
    {
        // code to be executed
    }

  * Example:
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }


 Notes:
 - The for loop is typically used when the number of iterations is known.
 - The while loop is used when the number of iterations is not known and depends on a condition.
 - The do-while loop is similar to the while loop, but it guarantees that the code block is executed at least once.
*/


#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    // i++ --> pehle print fir increment
    // ++i --> pehle increment fir print
    printf("The value of i is %d\n", i);
    return 0;
}


/*----------------------------[WHILE LOOP]--------------------*/
// Write a program to print natural numbers from 10 to 20 when initial loop counter is initialised to 0. Using While loop.

#include <stdio.h>

int main()
{
    int i = 0;  // i is loop counter.
    while(i < 11)
    {
        printf("%d\n", i+10);
        i++;
    }
    return 0;
}

// Write a program to print any n natural numbers (n is user input) before any number (also user input) using while loop.

#include <stdio.h>

int main()
{
    int a, n, cnt = 0;
    printf("Enter any number: ");
    scanf("%d", &a);

    printf("\nEnter how many natural numbers to be printed before the entered number: ");
    scanf("%d", &n);

    while(cnt <= n)
    {
        printf("%d\n", a - cnt);
        cnt ++;
    }
    return 0;
}


/*--------------------------[DO-WHILE LOOP]--------------------*/
// Write a program to print natural numbers from 10 to 20 when initial loop counter is initialised to 0. Using Do-While loop.

#include <stdio.h>

int main()
{
    int a = 0;
    do 
    {
        printf("%d\n",a+10);
        a++;
    }while(a<11);
    return 0;
}

/* A do-while loop runs at least once even if the condition (in while statement) is false. For example, let's analyse the below given code. */

#include <stdio.h>

int main()
{
    int i = 220;
    do
    {
       printf("value of i is: %d\n", i);
       i++;
    }while(i < 10);
    
    return 0;
} 
//Output of the above code will be: [value of i is: 220]


// Write a program to print any n natural numbers (n is user input) before any number (also user input) using do-while loop.

#include <stdio.h>

int main()
{
    int a, n;

    printf("Enter any number: ");
    scanf("%d", &a);

    printf("\nEnter how many natural numbers to be printed before the entered number: ");
    scanf("%d", &n);

    int cnt = 0;

    do
    {
        printf("%d\n", a - cnt);
        cnt ++;
    }while(cnt <= n);
    
    return 0;
}


/*--------------------------[FOR LOOP]--------------------*/
// Write a program to print natural numbers from 10 to 20 when initial loop counter is initialised to 0. Using For loop.

#include <stdio.h>

int main()
{
    int a = 0, cnt;
    for (cnt = 10 ; cnt <= 20 ; cnt ++)
    {
        printf("%d\n", a + cnt);
    }
    return 0;
}

// Write a program to print any n natural numbers (n is user input) before any number (also user input) using for loop.

#include <stdio.h>

int main()
{
    int a, n, cnt;
    printf("Enter any number: ");
    scanf("%d", &a);

    printf("\nEnter how many natural numbers to be printed before the entered number: ");
    scanf("%d", &n);
    for(cnt = 1 ; cnt <= n ; cnt ++)
    {
        printf("%d\n", a - cnt);
    }
    return 0;
}