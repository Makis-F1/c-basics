# Day 06 – While Loops and Input Validation

## Overview

This folder contains C exercises focused on `while` loops, `do while` loops, input validation, repeated user input, and simple telemetry-style logic.

The goal of Day 06 was to practice repeating a program while a condition is true and stopping only when the correct condition is reached.

## Files in This Folder

```txt
day06/
├── Validation.c
├── guess.c
├── input.c
├── speed.c
└── README.md
```

## Exercises Completed

### 1. `input.c`

This program reads numbers from the user until the user enters 0.

The purpose of this exercise was to practice:

- `while` loops
- repeated input
- sentinel values
- a loop based on user input

Example input:

```txt
5
8
3
0
```
Expected output: 

```txt
Program stops when 0 is entered.
```

### 2. `guess.c`

This program asks the user to guess a number.

The user keeps entering numbers until the correct number is guessed.

The program also counts the number of attempts and prints a different message depending on how many tries were needed.

The purpose of this exercise was to practice:

- `while` loops
- repeated guessing
- comparison logic
- attempt counting
- user interaction

Example input:

```txt
3
7
10
```

Expected output:

```txt
Unlucky. Wrong number. Try again:
Unlucky. Wrong number. Try again:
Not bad, but you could have done better.
```

If the user guesses the number on the first try:

```txt
10
```

Expected output:

```txt
You are incredible. First try. How did you do that? Can you read minds?
```

### 3. `speed.c`

This program counts how many times speed decreased in a sequence of speed measurements.

The user enters the number of speed samples and then enters the speed measurements one by one.

Each new speed value is compared with the previous one.

The purpose of this exercise was to practice:

- `do while` loops
- comparing current and previous values
- counting decreases
- simple telemetry-style logic
- basic input validation

Example input:

```txt
5
100
95
97
90
90
```

Expected output:

```txt
Speed has decreased 2 times
```

Explanation:

```txt
95 < 100  -> decrease
97 < 95   -> not a decrease
90 < 97   -> decrease
90 < 90   -> not a decrease
```

### 4. `Validation.c`

This program asks the user to enter the number 10.

If the user enters a different number, the program keeps asking again until the correct input is entered.

The purpose of this exercise was to practice:

- `while` loops
- input validation
- repeating input until it becomes correct
- condition-based loop control

Example input:

```txt
4
8
10
```

Expected output:

```txt
Your input is incorrect. Please try again:
Your input is incorrect. Please try again:
Your input is correct!
```

## Concepts Used

- `while` loops
- `do while` loops
- repeated input
- sentinel values
- input validation
- counter variables
- comparison operators
- basic telemetry-style logic

## What I Learned

I learned that a `while` loop is useful when the program should repeat while a condition is true.

I learned that a `do while` loop is useful when the loop body should run at least once.

I learned how to repeat user input until the correct value is entered.

I learned how to use a counter to count attempts or events.

I learned how to compare a current value with a previous value, which is important for telemetry-style problems.

## Tests

I tested:

- entering 0 to stop repeated input
- guessing the correct number on the first try
- guessing the correct number after multiple attempts
- entering valid and invalid values
- counting speed decreases with 5 measurements
- speed values that stay the same
- speed values that increase
- speed values that decrease

## How to Compile and Run

Compile and run input.c:

```txt
gcc input.c -o input.exe
./input.exe
```

Compile and run guess.c:

```txt
gcc guess.c -o guess.exe
./guess.exe
```

Compile and run speed.c:

```txt
gcc speed.c -o speed.exe
./speed.exe
```

Compile and run Validation.c:

```txt
gcc Validation.c -o Validation.exe
./Validation.exe
```

On Windows PowerShell:

```txt
.\input.exe
.\guess.exe
.\speed.exe
.\Validation.exe
```

## Common Mistakes I Need to Avoid

I should not use an uninitialized variable in a loop condition.

I should not confuse `=` with `==`.

`=` assigns a value.

`==` compares two values.

I should make sure that loop variables change inside the loop, otherwise the program can become an infinite loop.

I should also be careful when counting measurements. If the first measurement is used as the starting value, the loop should only read the remaining measurements.

## Engineering Explanation

Loops are important in engineering because many systems need to keep running until a certain condition is met.

In embedded systems, a program often keeps reading sensor values, checking conditions, and reacting to changes.

The speed decrease exercise is connected to telemetry because it compares each new sample with the previous one.

This is similar to detecting events in real data, such as:

```md
- speed drops
- braking events
- sensor threshold violations
- repeated invalid inputs
- system state changes
```

Even though these programs are simple, they train the same logic used in larger embedded and automotive systems.

## GitHub Commit

The commit message for this day should be:

Day 06: added while loop and input validation exercises

## Final Status

Day 06 is complete.

I practiced `while` loops, `do while` loops, input validation, repeated input, attempt counting, and speed decrease detection.

Next step: Day 07 – functions.
