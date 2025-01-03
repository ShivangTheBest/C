// Code to check if a number is even or odd using if-else statement.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even.\n", a);
    }
    else
    {
        printf("%d is odd.\n", a);
    }
    
    return 0;
}


/* Relational Operators in C: Used to evaluate conditions (true or false) inside the if statements. Some of the relational operators are:
    1. ==  
    2. != 
    3. > 
    4. < 
    5. >= 
    6. <= 
*/
// '=' is used for assignment, whereas '==' is used for equality check.

// Program to check eligibility for voting. 

#include <stdio.h>

int main()
{
    int age;
    printf("Welcome to the Voting Eligibility Checker!\nPlease enter your age:");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to vote.\n");

    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}

/* 
Logical Operators: There are 3 logical operators in C. 
    1. && : And- true when both conditions are true.
    2. || : Or- true when at least one of the conditions is true.
    3. ! : Not- returns true if false, and vice versa. 
*/