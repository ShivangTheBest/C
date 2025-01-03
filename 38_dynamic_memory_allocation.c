/*--------------------------MALLOC--------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));           //sizeof(int) tells us the bytes the data type (int here) consumes. We multiply it by n to allocate memory of n integers in the pointer.
    // int arr[n]; // Not allowed in c
    ptr[0] = 3;
    ptr [1]= 6;
    printf("%d", ptr[0]);
    return 0;
}


/*--------------------------CALLOC--------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));             //A bit different syntax, n denotes number, sizeof(int) defines particularly what (in this case bytes equal to space of int). 
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d", ptr[0]);
    return 0;
}


/*--------------------------FREE--------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    free(ptr);   //frees up the memory allocated to the pointer. Important while working in a memory restricted environment.
    printf("%d", ptr[0]);
    return 0;
}


/*--------------------------REALLOC--------------------------*/
// Sometimes the dynamically allocated memory is insufficient or more than required. Realloc is used to allocate memory of new size using the previous pointer and size.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int* ptr; 
    ptr = (int*) malloc(n * sizeof(int)); 
    ptr[0] = 3;  
    printf("%d", ptr[0]);

    ptr = (int*) realloc(ptr, 10 * sizeof(int)); 
    printf("%d", ptr[0]);
    return 0;
}