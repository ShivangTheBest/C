#include <stdio.h>

int main()
{
    int x = 4;
    int y = 9;

    printf("The value of 3*x - 8*y is: %d\n", 3*x - 8*y);  // 3*4 - 8*9 = 12 - 72 = -60
    return 0;
}

/* 
Operator precedence in C:  Mathematical rules like BODMAS are not applied in C. Operator priority used in C, is given below:
    1. Parentheses ()
    2. *, /, %
    3. +, -
    4. =, +=, -=, *=, /=, %=
*/

/*
Operator Associativity in C: When operators of equal priority are present in an expression, the tie is taken care of by associativity. 
*, /, %, +, -, =, +=, -=, *=, /=, %= follow left to right associativity. 
*/

/* x = 2, y = 3
The value of 8*y / 3*x is: 16. {24/3*2 = 8*2 = 16}
*/