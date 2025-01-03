// Write a program to find out whether a student is pass or fail; if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user.

#include <stdio.h>

int main()
{
    float m, p, c, sum;
    printf("Enter your marks in Maths: ");
    scanf("%f", &m);

    printf("Enter your marks in Physics: ");
    scanf("%f", &p);

    printf("Enter your marks in Chemistry: ");
    scanf("%f", &c);

    sum = (m + p + c) / 3;
    
    if (m < 33 && p < 33 && c < 33)
            {
                printf("You have failed in all subjects.\nHence, you have failed.\nTry again!!!\n");
            }
    else if (m < 33 && p < 33)
        {
            printf("You have failed in maths and physics.\nHence, you have failed.\nTry again!!!\n");
        }
    else if (m < 33 && c < 33)
        {
            printf("You have failed in maths and chemistry.\nHence, you have failed.\nTry again!!!\n");
        }
    else if (p < 33 && c < 33)
        {
            printf("You have failed in physics and chemistry.\nHence, you have failed.\nTry again!!!\n");
        }
    else if (m < 33)
        {
        printf("You have failed in maths.\nHence, you have failed.\nTry again!!!\n");
        }
    else if (p < 33)
        {
        printf("You have failed in physics.\nHence, you have failed.\nTry again!!!\n");
        }
    else if (c < 33)
        {
        printf("You have failed in chemistry.\nHence, you have failed.\nTry again!!!\n");
        }

    else if (sum < 40)
        {
        printf("You are passed in all subjects, but overall passing criteria is not cleared.\nHence, you have failed.\nTry again!!!\n");
        }       

    else if(sum >= 40)
        {
        printf("Total percentage of marks:\n%f\n", sum);
        printf("You passed!\nCongratulations!\n");
        }
    
    if(sum>90)
    {
        printf("You have passed with flying colors. Keep it up!!!");
    }
    return 0;
}

/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab		    Tax
2.5L - 5.0L		     5%
5.0L - 10.0L		20%
10.0L and above		30%
Note that there is no tax below 2.5L. Take income amount as input from the user.
*/

#include <stdio.h>

int main()
{
    float in, tax;
    printf("Enter your income(in lacs): ");
    scanf("%f", &in);

    if (in < 2.5)
    {
        printf("No tax.\n");
    }
    else if (2.5 < in && in < 5.0)
    {
        printf("Tax to be paid is: %f lakh(s)\n", in * 0.05);
    }
    else if (5.0 < in && in < 10.0)
    {
        printf("Tax to be paid is: %f lakh(s)\n", in * 0.20);
    }
    else if (in > 10.0)
    {
        printf("Tax to be paid is: %f lakh(s)\n", in * 0.30);
    }
    return 0;
}

// Write a program to check whether a character entered by a user is in lowercase or not.

#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if(a <= 'z' && a >= 'a')
    {
        printf("Entered character is in lowercase.\n");
    }
    else if (a <= 'Z' && a > 'A')
    {
    
        printf("Entered character is in uppercase.\n");
    }
    else
    {
        printf("Entered character is not an alphabet.\n");
    }
    return 0;
}

// Write a program to find greatest of four numbers entered by a user. 

#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("%f is the greatest number.", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%f is the greatest number.", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("%f is the greatest number.", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("%f is the greatest number.", d);
    }
    return 0;
}