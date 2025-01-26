#include<iostream>
#include <stdio.h>
using namespace std;
// Function to display game instructions
void displayInstructions() {
    printf("Welcome to the Number Guessing Game!\n");
    printf("Instructions:\n");
    printf("1. The computer will think of a number between 1 and 100.\n");
    printf("2. You have 4 chances to guess the number.\n");
    printf("3. After each wrong guess, you will receive a hint:\n");
    printf("   - 'Your number is too small' or 'Your number is too large'.\n");
    printf("4. If you guess correctly, you win!\n");
    printf("5. After the game ends, you can choose to play again.\n\n");
}

// Function to generate a manual "random" number using a basic seed mechanism
int generateRandomNumber(int seed) {
    return (seed * 37 + 23) % 100 + 1;
}

int main() {
    int number, guess, attempts, playAgain;
    int seed = 57; // Replace this value with any number for different results

    // Display game instructions
    displayInstructions();

    do {
        // Generate a pseudo-random number using the custom function
        number = generateRandomNumber(seed);
        seed += 23; // Modify seed slightly to vary numbers in subsequent games
        attempts = 4;

        printf("The computer has thought of a number between 1 and 100.\n");
        printf("You have 4 chances to guess it!\n\n");

        // User guesses the number
        while (attempts > 0) {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            if (guess == number) {
                printf("Congratulations! You guessed the number correctly.\n\n");
                break;
            } else if (guess < number) {
                printf("Your number is too small.\n");
            } else {
                printf("Your number is too large.\n");
            }

            attempts--;
            if (attempts > 0) {
                printf("You have %d attempt(s) left.\n\n", attempts);
            } else {
                printf("Sorry, you've used all your attempts. The correct number was %d.\n\n", number);
            }
        }

        // Ask user if they want to play again
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("Thank you for playing! Goodbye!\n");

    return 0;
}
