/* Typedef keyword:
We can use the typedef keyword to create an alias name for data types in C. This can be useful to make the code more readable and easier to maintain. For example, we can create an alias for the struct employee as Emp using the typedef keyword. This allows us to use Emp instead of struct employee when declaring variables of that type. Here's an example:
*/

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp;

int main()
{
    // struct employee e1;
    Emp e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    show(e1);     //-->Function call


    return 0;
}
