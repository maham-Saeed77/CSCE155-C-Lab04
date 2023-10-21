
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {
  int n = 1000;
  srand(time(NULL));
  int number = (rand() % n) + 1;
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);

  while (guess != number) {
    // Read the user's guess
    printf("Enter your guess: ");
    scanf("%d", &guess);

    // Increment the number of guesses
    numGuesses++;

    if (guess < 1 || guess > n) {
      printf("Please enter a valid number between 1 and %d.\n", n);
    } else if (guess < number) {
      printf("The number is higher. Try again.\n");
    } else if (guess > number) {
      printf("The number is lower. Try again.\n");
    }
  }

  printf("Congratulations, you found it! Number of guesses: %d\n", numGuesses);
  return 0;
}