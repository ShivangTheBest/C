// Write a program to create an array of 10 integers and store multiplication table of any number in it.

#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0 ; i < 10 ; i ++)
    {
        arr[i] = 5 * (i + 1);
    }
    for (int i = 0 ; i < 10 ; i ++)
    {
        printf("5 X %d = %d\n", (i + 1), arr[i]);
    }
    return 0;
}


// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0, i;
    for (i = 0 ; i < 5 ; i ++)
    {
        printf("Enter the (%d)th term of your array.", i);
        scanf("%d", &arr[i]);

    }
    for (i = 0 ; i < 5 ; i ++)
    {
        if(arr[i] > 0)
        {
           sum += 1;
        }

    }
    printf("%d", sum);
    
    return 0;
}


// Create an array of size 3 x 10 containing multiplication table of 2, 7, 9.

#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            arr[i][j]= mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 10; j ++)
        {
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    } 
    
    return 0;
}


// Create a 3-D array and print the address of its elements in increasing order.

#include <stdio.h>

int main()
{
    int arr[2][3][4];
    int i, j, k;
    for (i = 0; i < 2; i ++)
    {
        for (j = 0; j < 3; j ++)
        {
            for (k = 0; k < 4; k ++)
            {
                printf("%u ", &arr[i][j][k]);
            }
        }
    }
    return 0;
}


// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){
   /* for  i from 0 to n/2
    arr[i] arr[n-i-1] 
    */
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }
   
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}
