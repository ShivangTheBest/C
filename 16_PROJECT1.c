/*
                    PROJECT 1: NUMBER GUESSING GAME
                    --------------------------------
- The computer will generate a random number between 1 and 100, and will ask the user to guess it.
- If the player's guess is higher than the actual number, the program displays "Lower number please". Similarly, if the user's guess is too low, the program prints "Higher number please".
- When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, numberOfGuesses = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    // Game loop
    do
    {
        printf("Guess the number (between 1 and 100): ");
        scanf("%d", &guess);
        numberOfGuesses++;

        if (guess > number)
        {
            printf("Lower number please.\n");
        }
        else if (guess < number)
        {
            printf("Higher number please.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", numberOfGuesses);
        }
    } while (guess != number);

    return 0;
}
