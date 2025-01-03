// An array is a collection of similar elements.
// It is important to note that the array index starts at 0.

#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter the marks of 5 students:\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    for(int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d", &marks[i]);
    }

    printf("The marks at index 0 and index 3, respectively are: %d, %d", marks[0], marks[3]);

    return 0;
}

/*------------------------MULTIDIMENSIONAL ARRAYS------------------------*/

/*
An array can be of 2 or 3 or n dimensions. A 2 dimensional array can be defined as:
 int arr[3][2] =          this depicts 3 rows, and 2 columns 
{(1, 4)
 (7, 9)
 (11, 22)};  This array has 2 dimensions, row and column.
arr[0][0] prints 1, arr[3][1] prints 11, and so on.
*/


// Creating a 2-D array from user input.

#include <stdio.h>

int main()
{
    int i, j;
    printf("Create an array. The array will have 3 rows and 2 columns.");

    int arr[3][2];
    for (i = 0 ; i < 3 ; i ++)
    {
        for (j = 0 ; j < 2 ; j ++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }

    }
    
    for (i = 0 ; i < 3 ; i ++)
    {
        for (j = 0 ; j < 2 ; j ++)
        {
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }

    }
    return 0;
}
