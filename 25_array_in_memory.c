#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter the marks of 5 students:\n");

    for(int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d", &marks[i]);
    }
    for(int i = 0 ; i < 5 ; i ++)
    {
        printf("The address of marks at index %d is %u\n", i, &marks[i]);
    }

    return 0;
}
//Output explanation: Numbers like 642272, 642276, 642280, 642284, 642288 are printed. These are contiguous blocks in memory assigned to each integer.
//So we can say that we can find the address of any array element by increasing the pointer value of the previous array element by 1.
//So basically we can point out the first array element of the array, and can easily traverse the entire array.


/*------------------------ARRAY USING POINTERS------------------------*/

#include <stdio.h>

int main()
{
    int marks[] = {12, 34, 53, 66};

    int *ptr = marks;  //same as int *ptr = &marks[0];
    
    int i;
    for(i = 0 ; i < 4 ; i ++)
    {
        // printf("The marks at %d element of the array are: %d. The address of this element is: %d\n", i, marks[i], &marks[i]);

        printf("The marks at index %d is %d.\n", i, ptr);
        ptr ++;
    }

    return 0;
} 