#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    char playAgain;

    srand(time(NULL));

    do {
        secretNumber = rand() % 100 + 1;
        attempts = 0;

        printf("\n=====================================\n");
        printf("          GUESSWIN\n");
        printf("     Number Guessing Game\n");
        printf("=====================================\n");
        printf("I have selected a number between 1 and 100.\n");
        printf("Can you guess it?\n");

        do {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);

            attempts++;

            if (guess > secretNumber) {
                printf("Your guess is bigger than the secret number. Try a smaller number.\n");
            }
            else if (guess < secretNumber) {
             
                printf("Your guess is smaller than the secret number. Try a bigger number.\n");
            }
            else {
                printf("\nCongratulations!\n");
                printf("You guessed the correct number.\n");
                printf("Total Attempts: %d\n", attempts);
            }

        } while (guess != secretNumber);

        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'Y' || playAgain == 'y');

    printf("\nThank you for playing GuessWin!\n");

    return 0;
}