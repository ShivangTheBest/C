/*
Arrays & Strings   -->   Similar Data (int, float, char)
Structures         -->   Dissimilar data types
*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};  //->semicolon is necessary

int main()
{
    struct employee e1, e2, e3;
    e1.code = 555;
    strcpy(e1.name, "Shivang");     //->strcpy is used because we can't assign a string to a character array directly.
    e1.salary = 7.91;

    printf("%d, %s, %f", e1.code, e1.name, e1.salary);
    return 0;
}