# Day 05 – For Loops, Sums, and Repeated Calculations

## Overview

This folder contains C exercises focused on `for` loops.

The goal of Day 05 was to practice `for` loops, repeated calculations, sums, and counting values using loops.

## Files in This Folder

```txt
day05/
├── multiplication_table.c
├── numbers.c
├── sum_of_n_numbers.c
├── threshold.c
└── README.md
```
## Exercises Completed

### 1. `multiplication_table.c`

This program reads an integer and prints the multiplication table for that integer from 1 to 10.

The purpose of this exercise was to practice:

- for loops
- counter variables
- multiplication
- repeated output
- formatted terminal output

Example input:

```txt
5
```

Example output:

```txt
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```

### 2. `numbers.c`

This program prints numbers from 1 to 100.

The purpose of this exercise was to practice:

- for loop
- counter variables
- repeated output
- fixed-range iteration

Output:

```txt
1
2
3
4
.
.
.
99
100
```

### 3. `sum_of_n_numbers`

This program reads an integer `N` and calculates the sum of all numbers from 1 to `N`.

The purpose of this exercise was to practise:

- `for` loops
- accumulator variables
- user input
- repeated addition
- calculating a sum step by step

Example input:

```txt
2
```

Example output:

```txt
3
```

Another example input:

```txt
3
```

Example output:

```txt
6
```

### 4. `threshold.c`

This program reads how many numbers the user wants to enter, reads a threshold value, and counts how many entered numbers are above that threshold.

The purpose of this exercise was to practice:

- `for` loops
- user input
- counter variables
- `if` statements inside loops
- threshold logic
- counting values that meet a condition

Example input:

```txt
5
25
10
20
30
40
50
```

Example output:

```txt
3
```

## Concepts used

- `for` loops
- counter variables
- accumulator variables
- user input
- basic arithmetic
- `if` statements inside loops

## What I Learned

I learned that a `for` loop is useful when I know how many times an operation should repeat.

I learned that loops make programs shorter and cleaner because I do not need to write the same code many times.

I also learned how to use counters and accumulators to solve repeated calculation problems.

## Tests

I tested each program with at least two different inputs.

Examples:
- `sum_of_n_numbers.c` with N = 5 and N = 1
- `multiplication_table.c` with 5 and 0
- `threshold.c` with values above and below the threshold

## How to Compile and Run

Example:

```bash
gcc multiplication_table.c -o multiplication_table.exe
./multiplication_table.exe
```

On Windows PowerShell:

```powershell
.\multiplication_table.exe
```

## Common Mistakes I Need to Avoid

- Using the wrong loop condition, for example `<` instead of `<=`
- Forgetting to initialize accumulator variables like `sum`
- Forgetting to increase counters when a condition is true
- Confusing `>` and `>=` in threshold checks
- Forgetting `\n` in `printf`, which makes the output harder to read

## Engineering Explanation

Loops are important in engineering because many real systems need to process repeated data.

In embedded systems and telemetry, software often reads many values from sensors, processes them, and checks if they meet certain conditions.

The exercises in this folder are simple, but they represent the same logic used in larger systems.

For example:

- printing numbers from 1 to 100 trains repeated execution
- summing numbers trains accumulator logic
- multiplication tables train repeated calculations
- threshold counting is similar to checking how many sensor readings are above a safety limit

The threshold exercise is especially important for future telemetry and embedded work.

In a real system, the same idea could be used to count:

- how many temperature readings are above a limit
- how many speed samples are above a target value
- how many sensor values are outside the allowed range
- how many braking events happened in telemetry data

This is why `for` loops are important: they allow the program to process many values automatically instead of writing the same code many times.

## Github Commit

```txt
Day 05: added for-loop iteration exercises
```

## Level-Up Check

I can move on from Day 05 because:

- all programs compile without errors
- I understand how `for` loops work
- I can use counters and accumulators
- I can use `if` statements inside loops
- I tested all exercises with different inputs
- I can explain the logic without looking at the solution

## Final Status

Day 05 is complete.

I learned how to use `for` loops to repeat operations a specific number of times.

I practiced counters, accumulators, repeated calculations, multiplication tables, and threshold counting.

I also learned how loops can make programs shorter, cleaner, and easier to modify.

Next step: Day 06 – while loops and input validation.











