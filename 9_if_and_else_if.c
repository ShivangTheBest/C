/*
Else-if clause: instead of using multiple if statements, we can use else-if along with if thus forming an if-else-if-else ladder. The last else is optional, and it is executed only when all conditions fail.
*/

// Example code:

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("The number is 1.\n");
    }
    else if (num == 2)
    {
        printf("The number is 2\n");
    }
    else if (num == 3)
    {
        printf("The number is 3\n");
    }
    else
    {
        printf("The number is not 1, 2, or 3.\nThe number is %d\n", num);
    }
    return 0;
}

// All the conditions are checked at once, and the condition, which is true is executed. If none of the conditions are true, the else block is executed. The else block is optional. If there is no else block, and none of the conditions are true, the program will simply exit.