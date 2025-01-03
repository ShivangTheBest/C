#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating (1-5): ");
    scanf("%d", &rating);
    switch(rating)
    {
        case 1:
            printf("Your rating is 1.\nIf you can spare us some time, please provide us a feedback.\nThanks for your rating!");
            break; // The break statement is used to terminate the switch statement. If the break statement is not used, all the cases after the matching case will be executed.
        case 2:
            printf("Your rating is 2.\nIf you can spare us some time, please provide us a feedback.\nThanks for your rating!");
            break;
        case 3:
            printf("Your rating is 3.\nIf you can spare us some time, please provide us a feedback.\nThanks for your rating!");
            break;
        case 4:
            printf("Your rating is 4.\nIf you can spare us some time, please provide us a feedback.\nThanks for your rating!");
            break;
        case 5:
            printf("Your rating is 5.\nThanks for your rating!");
            break;
        default:
            printf("Invalid rating.");
    }
    return 0;
}

/*
In some cases, a switch statement can be more efficient than an if-else chain because the compiler can optimize the switch statement using jump tables or binary search, especially when the cases are contiguous integer values. An if-else chain requires evaluating each condition in sequence until a match is found, which can be less efficient for a large number of conditions.
*/