#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int plr;
    int com;

    printf("For Snake: -1, for Water: 0 and for Gun: 1. Enter your choice- \n");
    scanf("%d", &plr);

    // Initialize random number generator
    srand(time(0));
    // Generate a random number between -1, 0, and 1
    int randomIndex = rand() % 3; // Generate a random number between 0 and 2
    int options[] = {-1, 0, 1}; // Array of possible values
    com = options[randomIndex]; // Select a value from the array

    printf("Player choice: %d\n", plr);
    printf("Computer's choice: %d\n", com);

    if(com == -1 && plr == 0)
    {
        printf("I won, you lost! Hahaha");                     //Computer
    }
    else if(com == 0 && plr == 1)
    {
        printf("I won, you lost! Hahaha");                     //Computer
    }
    else if(com == 1 && plr == -1)
    {
        printf("I won, you lost! Hahaha");                     //Computer
    }
    
    else if(plr == -1 && com == 0)
    {
        printf("You won this one. Nothing too big to be so proud of.");                     //Player
    }
    else if(plr == 0 && com == 1)
    {
        printf("You won this one. Nothing too big to be so proud of.");                     //Player
    }
    else if(plr == 1 && com == -1)
    {
        printf("You won this one. Nothing too big to be so proud of.");                     //Player
    }
    else if(com == plr)
    {
        printf("It's a draw. You are so goddamn predictable. I could smell that one coming from here.");
    }

    return 0;
}