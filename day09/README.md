# Day 09 – Strings and Character Arrays

## Overview

This folder contains C exercises focused on strings and character arrays.

The goal of Day 09 was to practice reading text input, measuring string length, comparing strings, counting vowels, and creating a simple username/password validation program.

This day is important because strings are used in almost every real program, including usernames, passwords, commands, messages, file names, sensor labels, telemetry channels, and user input.

## Files in This Folder

```txt
day09/
├── compare.c
├── login.c
├── name_lenght.c
├── vowels.c
└── README.md
```

## Exercises Completed

### 1. `name_lenght.c`

This program reads a name from the user and prints how many characters the name has.

The purpose of this exercise was to practice:

- declaring a character array
- reading a string with `scanf`
- using `strlen`
- including the `<string.h>` library

Example input:

```txt
Makis
```

Expected output:

```txt
This name has 5 characters.
```

Second example input:

```txt
Formula
```

Expected output:

```txt
This name has 7 characters.
```

### 2. `compare.c`

This program reads two words from the user and compares them.

If the words are the same, the program prints that they are the same.  
If the words are different, the program prints that they are different.

The purpose of this exercise was to practice:

- reading two strings
- using `strcmp`
- understanding that `strcmp` returns `0` when strings are equal
- using string comparison inside an `if` statement

Example input:

```txt
car
car
```

Expected output:

```txt
These words are the same.
```

Second example input:

```txt
car
bike
```

Expected output:

```txt
These words are different.
```

### 3. `vowels.c`

This program reads one word from the user and counts how many vowels it contains.

The purpose of this exercise was to practice:

- reading a word
- looping through a string
- accessing individual characters
- using `strlen`
- using a counter variable
- checking characters with `if`

Example input:

```txt
formula
```

Expected output:

```txt
This word has 3 vowels.
```

Second example input:

```txt
engine
```

Expected output:

```txt
This word has 3 vowels.
```

### 4. `login.c`

This program asks the user to enter a username and password.

The program keeps asking for input until both the username and password are correct.

The purpose of this exercise was to practice:

- storing fixed username and password strings
- reading user input
- comparing strings with `strcmp`
- using a `while` loop for repeated validation
- updating validation variables inside a loop

Example wrong input:

```txt
Username: test
Password: 1234
```

Expected output:

```txt
Your username or password is wrong please try again.
```

Correct input:

```txt
Username: Makis
Password: Formula1
```

Expected output:

```txt
Welcome back Makis!
```

## Concepts Used

- strings
- character arrays
- null terminator `\0`
- `scanf("%s", word)`
- `<string.h>`
- `strlen`
- `strcmp`
- `for` loops
- `while` loops
- counters
- string comparison
- input validation
- basic login logic

## What I Learned

I learned that strings in C are stored as arrays of characters.

I learned that every string in C ends with a special null terminator character `\0`.

I learned how to read a word from the user using `scanf`.

I learned how to find the length of a string using `strlen`.

I learned how to compare two strings using `strcmp`.

I learned that `strcmp` returns `0` when two strings are equal.

I learned how to loop through a string character by character.

I learned how to count specific characters in a string.

I also learned that variables used for validation must be updated inside a loop.

## Tests

I tested:

- short names
- longer names
- equal words
- different words
- words with vowels
- words without vowels
- wrong username and password
- correct username and password
- repeated login attempts
- uppercase and lowercase differences in string comparison

## How to Compile and Run

Compile and run `name_lenght.c`:

```bash
gcc name_lenght.c -o name_lenght.exe
./name_lenght.exe
```

Compile and run `compare.c`:

```bash
gcc compare.c -o compare.exe
./compare.exe
```

Compile and run `vowels.c`:

```bash
gcc vowels.c -o vowels.exe
./vowels.exe
```

Compile and run `login.c`:

```bash
gcc login.c -o login.exe
./login.exe
```

On Windows PowerShell:

```powershell
.\name_lenght.exe
.\compare.exe
.\vowels.exe
.\login.exe
```

## Common Mistakes I Need to Avoid

I should not use `&` when reading a string into a character array with `scanf`.

Correct:

```c
scanf("%s", word);
```

I should remember that `strcmp` must be used to compare strings.

I should not compare strings using `==`.

Wrong:

```c
if (word1 == word2)
```

Correct:

```c
if (strcmp(word1, word2) == 0)
```

I should remember that `strcmp` returns `0` when strings are equal.

I should be careful with array size because strings need space for the null terminator `\0`.

For example, a string with 9 visible characters needs at least 10 spaces in the character array.

I should avoid non-standard functions such as `strlwr` and `strcmpi` unless I know they are supported by my compiler.

I should update validation variables inside loops when checking username and password again.

## Engineering Explanation

Strings are important in engineering and software because many systems need to process text-based data.

Examples include:

- usernames
- passwords
- commands
- device names
- sensor labels
- configuration values
- serial messages
- telemetry channel names
- CAN signal names
- file names

In embedded systems and automotive software, text is often used for communication, debugging, configuration, and data logging.

For example, a telemetry system may store channel names such as:

```txt
speed
rpm
temperature
voltage
brake_pressure
```

A program must be able to read, compare, and process these strings correctly.

The exercises in this folder are simple, but they introduce important ideas used in larger software systems.

The login exercise is also a basic example of repeated input validation, which is common in real programs.

## GitHub Commit

The commit message for this day should be:

```txt
Day 09: added string and character array exercises
```

## Level-Up Check

I can move on from Day 09 because:

- all programs compile without errors
- I can declare a character array
- I can read a word using `scanf`
- I understand that strings are arrays of characters
- I understand that strings end with `\0`
- I can use `strlen`
- I can use `strcmp`
- I know that `strcmp` returns `0` when strings are equal
- I can loop through a string character by character
- I can count vowels in a word
- I can make a simple username/password validation program
- I understand why strings are useful in real software and telemetry systems

## Final Status

Day 09 is complete.

I practiced strings, character arrays, string length, string comparison, vowel counting, and simple login validation.

Next step: Day 10 – structs.
