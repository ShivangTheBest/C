// Integer variables --> int a = 3            | %d --> integer 
// Float variables --> float b = 4.5          | %f --> float
// Character variables --> char c = 'A'       | %c --> character
//  %d, %f, %c are called format specifiers.

#include <stdio.h>

int main(){
    int a = 4;
    float b = 8;
    char c  = 'u';
    float d = 55;
    float e = d - b;
    printf("The value of a and b, respectively is %d and %f \n", a , b);
    printf("The value of c is %c \n", c);
    printf("The sum of b and d is: %f \n", b + d);
    printf("The difference in d and b is: %e \n", e);
    return 0;
}



// The below written code is also known as boiler plate code. This is the basic code used in every code, as it is accepted by every compiler of C.

/* 
#include <stdio.h>

int main(){

    return 0;
}
*/ 