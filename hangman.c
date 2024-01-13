// hangman.c
#include "hangman.h"

void displayMenu()
{
    printf("  #     #  #######  #   #  #######  #        #  #######  #   #\n");
    printf("  #     #  #     #  ##  #  #        # #     ##  #     #  ##  #\n");
    printf("  #######  #######  # # #  #   ###  #  #   # #  #######  # # #\n");
    printf("  #     #  #     #  #  ##  #   # #  #   # #  #  #     #  #  ##\n");
    printf("  #     #  #     #  #   #  #######  #        #  #     #  #   #\n");
    printf("How to play:\n");
    printf("1. You have to guess the hidden word.\n");
    printf("2. Enter a single letter as your guess.\n");
    printf("3. You have a maximum of %d incorrect guesses.\n", MAX_TRIES);
    printf("4. The Hangman figure will be displayed as you make incorrect guesses.\n");
    printf("5. Press '?' for hint. You only get 2 hints.\n");
    printf("6. Try to guess the word before running out of tries!\n\n");
}

// Hints (Dynamic to Adapt to the Random Word)
void displayHint(int hintCount, char randomWord[], char guessedWord[], char guessedLetters[])
{
    switch (hintCount)
    {
    case 1:
        printf("\nHint 1: The word is related to ");
        // Provide a hint based on the random word
        if (strcmp(randomWord, "exquisite") == 0)
        {
            printf("beauty.\n");
        }
        else if (strcmp(randomWord, "hangman") == 0)
        {
            printf("a game.\n");
        }
        else if (strcmp(randomWord, "program") == 0)
        {
            printf("coding.\n");
        }
        else if (strcmp(randomWord, "computer") == 0)
        {
            printf("technology.\n");
        }
        else if (strcmp(randomWord, "language") == 0)
        {
            printf("communication.\n");
        }
        break;
    case 2:
        printf("\nHint 2: The word ");
        // Provide a hint based on the random word
        if (strcmp(randomWord, "exquisite") == 0)
        {
            printf("is a noun.\n");
        }
        else if (strcmp(randomWord, "hangman") == 0)
        {
            printf("is a noun.\n");
        }
        else if (strcmp(randomWord, "program") == 0)
        {
            printf("is a noun.\n");
        }
        else if (strcmp(randomWord, "computer") == 0)
        {
            printf("is a noun.\n");
        }
        else if (strcmp(randomWord, "language") == 0)
        {
            printf("is a noun.\n");
        }
        break;
    default:
        printf("\nSorry, no more hints available.\n");
    }
    printf("\n");
}

void displayGameStatus(int hintCount, int incorrectGuesses)
{
    printf("Hints left: %d\n", MAX_HINTS - hintCount);
    printf("Incorrect guesses left: %d\n", MAX_TRIES - incorrectGuesses);
}

int chooseRandomWord(char words[MAX_WORDS][WORD_LENGTH])
{
    srand(time(NULL));
    return rand() % MAX_WORDS;
}

void displayHangman(int incorrectGuesses)
{
    switch (incorrectGuesses)
    {
    case 0:
        printf("    ________\n");
        printf("    |      |\n");
        printf("           |\n");
        printf("           |\n");
        printf("           |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    case 1:
        printf("    ________\n");
        printf("    |      |\n");
        printf("    O      |\n");
        printf("           |\n");
        printf("           |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    case 2:
        printf("    ________\n");
        printf("    |      |\n");
        printf("    O      |\n");
        printf("    |      |\n");
        printf("           |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    case 3:
        printf("    ________\n");
        printf("    |      |\n");
        printf("    O      |\n");
        printf("   /|      |\n");
        printf("           |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    case 4:
        printf("    ________\n");
        printf("    |      |\n");
        printf("    O      |\n");
        printf("   /|\\     |\n");
        printf("           |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    case 5:
        printf("    ________\n");
        printf("    |      |\n");
        printf("    O      |\n");
        printf("   /|\\     |\n");
        printf("   /       |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    case 6:
        printf("    ________\n");
        printf("    |      |\n");
        printf("    O      |\n");
        printf("   /|\\     |\n");
        printf("   / \\     |\n");
        printf("           |\n");
        printf("    _______|\n");
        break;
    default:
        break;
    }
}
