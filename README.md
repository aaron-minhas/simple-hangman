# Hangman Game

A simple Hangman game written in C.

## Table of Contents
- [Description](#description)
- [Features](#features)
- [How to Play](#how-to-play)
- [Setup](#setup)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Description
This Hangman game is a console-based application written in C. It challenges players to guess a hidden word, providing hints and Hangman figures along the way. The game is designed to be simple and enjoyable.

## Features
- Randomly selects words from a predefined list.
- Allows players to guess letters and provides feedback.
- Displays Hangman figures for incorrect guesses.
- Provides hints to help players guess the word.

## How to Play
1. Run the executable to start the game.
2. Enter a single letter as your guess.
3. You have a maximum of 6 incorrect guesses.
4. The Hangman figure will be displayed as you make incorrect guesses.
5. Press '?' for a hint. You only get 2 hints.
6. Try to guess the word before running out of tries!

## Setup
No special setup is required. Simply compile the provided source code and run the executable.

```bash
gcc -o hangman main.c hangman.c
./hangman.exe
