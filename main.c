// main.c
#include "hangman.h"

int main() {
    char word[WORD_LENGTH], guessedWord[WORD_LENGTH], guessedLetters[MAX_TRIES];
    char words[MAX_WORDS][WORD_LENGTH] = {"exquisite", "hangman", "program", "computer", "language"};
    int tries = 0, correctGuess = 0, incorrectGuesses = 0, hintCount = 0;

    // Initialize guessedLetters array
    for (int i = 0; i < MAX_TRIES; i++) {
        guessedLetters[i] = '\0';
    }

    // Choose a random word from the list
    int randomIndex = chooseRandomWord(words);
    strcpy(word, words[randomIndex]);

    // Initialize guessedWord with underscores
    for (int i = 0; i < strlen(word); i++) {
        guessedWord[i] = '_';
    }
    guessedWord[strlen(word)] = '\0';

    // Display the menu
    displayMenu();

    do {
        // Display hints and incorrect guesses left
        displayGameStatus(hintCount, incorrectGuesses);

        // Display Hangman figure
        displayHangman(incorrectGuesses);

        // Print the formatted representation of the word WITH SPACES
        printf("Word: ");
        for (int i = 0; i < strlen(word); i++) {
            printf("%c ", guessedWord[i]);
        }
        printf("\n");

        char guess;
        printf("Enter your guess: ");
        scanf(" %c", &guess);  // Note the space before %c to consume any newline characters

        int found = 0;

        if (guess == '?') {
            // Player requested a hint
            hintCount++;
            displayHint(hintCount, word, guessedWord, guessedLetters);
            continue;  // Skip the rest of the loop and prompt for the next guess
        }

        // Check if the guessed letter is in the word
        for (int i = 0; i < strlen(word); i++) {
            if (tolower(word[i]) == tolower(guess)) {
                guessedWord[i] = word[i];
                found = 1;
                correctGuess++;
            }
        }

        if (!found) {
            tries++;
            incorrectGuesses++;
            printf("Incorrect guess. Tries left: %d\n\n", MAX_TRIES - tries);
        }

    } while (tries < MAX_TRIES && correctGuess < strlen(word));

    // Display final Hangman figure
    displayHangman(incorrectGuesses);

    if (correctGuess == strlen(word)) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nSorry, you ran out of tries. The word was: %s\n", word);
    }

    return 0;
}
