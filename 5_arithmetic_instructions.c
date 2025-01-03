// No operator is assumed to be present.

#include <stdio.h>

int main() {
    int a = 8, b = 4;

    // a & b are known as operands, whereas +, -, *, / are known as operators.

    // = is an assignment operator, which assigns the value of the right-hand side to the left-hand side.

      
    printf("a+b is: %d\n", a + b);
    printf("a-b is: %d\n", a - b);
    printf("a*b is: %d\n", a * b);
    printf("a/b is: %d\n", a / b);

    return 0;
}


// % is a modulus operator or modular division operator, which returns the remainder of the division of the left operand by the right operand. 
// % cannot be used with float or double.
// % returns the sign of the left operand.

// There is no operator to perform exponentiation in C.
// To perform exponentiation, we can use the pow() function from the math.h library. We will have to include math.h library.

#include <stdio.h>
#include <math.h>
int main() {

    printf("2^3 is: %f\n", pow(2, 3));

    return 0;
}