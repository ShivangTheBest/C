#include <stdio.h>

struct employee

{
    int code;
    float salary;
    char name[10];
}; 

int main()
{
    struct employee e1;
    e1.code = 555;
    struct employee *ptr;
    ptr = &e1;  //ptr made for an employee, and not just for an employee's code
    printf("%d", (*ptr).code);  //-> known as dereferencing

    return 0;
}

/*-----ARROW OPERATOR-----*/
// Instead of writing (*ptr).code, we can write ptr->code, and access the members of the structure using the arrow operator (->).    [printf("%d", ptr->code);]

//A function to display the employee details:

#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // function prototype


void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    show(e1);     //-->Function call


    return 0;
}