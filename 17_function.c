/* 
A function is a block of code which performs a particular task.
A function can be reused by the programmer in a given program any number of times.
*/

#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)            //x and y are known as parameters.
{
    printf("The sum is %d\n", x + y);
    return x + y;
}

int main() 
{
    int a = 1;              
    int b = 2;

    // Function call: When a function is called from main(), the main function transfers to the called function. Once the function finishes executing, main() resumes.
    int c = sum(a, b);           //a and b are known as arguments.
    printf("%d\n", c);

    return 0;
}


#include <stdio.h>

void display ()    //Function prototype: Only includes the function signature (name, return type, and parameters).
{
    printf("Hi I am display.");
}   

int main()
{
    display();     //Function call to display
    return 0;
}

void display()     //Function definition: Includes the function signature and the body (the actual code).
{
    printf("Hi. I am display.");
}