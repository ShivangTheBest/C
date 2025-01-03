/* 
The break statement is used to exit a loop prematurely. It is used to break out of a loop when a certain condition is met. For example. let's analyse the below given code.
*/

#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        if(i=4)
        {
            break;
        }
        i ++;
    }while(i < 10);
    return 0;
}

/* The continue statement is used to immediately move to the next iteration of the loop. 
The control is taken to the next iteration thus skipping everything below "continue" inside the loop for that iteration. For example, let's analyse the below given code.
*/

#include <stdio.h>

int main()
{
    int skip = 5;  //Sometimes the name of the variable does not indicate the behaviour of the program.
    int i = 0;

    while (i < 10)
    {
        i ++;
        if(i != skip)
        {
            continue;
        }
        else
        {
            printf("The value of i is %d\n", i);
        }
    }
    return 0;
}

/*
    * The break statement completely terminates the loop.
    * The continue statement skips the current iteration of the loop and moves to the next iteration.
*/
