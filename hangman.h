// hangman.h
#ifndef HANGMAN_H
#define HANGMAN_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 6
#define WORD_LENGTH 10
#define MAX_HINTS 2
#define MAX_WORDS 5

void displayMenu();
void displayHint(int hintCount, char randomWord[], char guessedWord[], char guessedLetters[]);
void displayGameStatus(int hintCount, int incorrectGuesses);
int chooseRandomWord(char words[MAX_WORDS][WORD_LENGTH]);
void displayHangman(int incorrectGuesses);

#endif
