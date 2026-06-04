# Day 07 – Functions and Calculator Refactoring

## Overview

This folder contains C exercises focused on functions.

The goal of Day 07 was to learn how to move repeated or specific logic into separate functions instead of writing everything directly inside `main`.

This day is important because functions make code cleaner, easier to read, easier to test, and easier to upgrade later.

## Files in This Folder

```txt
day07/
├── average3.c
├── calculatorV2.c
├── kmh_to_ms.c
├── max2.c
└── README.md
```

## Exercises Completed

### 1. `max2.c`

This program reads two integers and uses a function to return the higher number.

The purpose of this exercise was to practice:

- defining a function
- using function parameters
- returning a value
- comparing two values
- using the returned value in `main`

Example input:

```txt
5
9
```

Expected output:

```txt
The higher number is: 9
```

Second example input:

```txt
10
10
```

Expected output:

```txt
The higher number is: 10
```

### 2. `average3.c`

This program reads three numbers and uses a function to calculate their average.

The purpose of this exercise was to practice:

- functions with multiple parameters
- returning a decimal value
- using `float`
- calculating an average
- printing a result with two decimal places

Example input:

```txt
3
4
5
```

Expected output:

```txt
Their average is: 4.00
```

Second example input:

```txt
2.5
3.5
4.0
```

Expected output:

```txt
Their average is: 3.33
```

### 3. `kmh_to_ms.c`

This program reads speed in km/h and uses a function to convert it to m/s.

The purpose of this exercise was to practice:

- writing a function for an engineering formula
- using floating-point values
- returning a calculated result
- unit conversion

Formula:

```txt
m/s = km/h / 3.6
```

Example input:

```txt
36
```

Expected output:

```txt
Speed in m/s is: 10.00
```

Second example input:

```txt
72
```

Expected output:

```txt
Speed in m/s is: 20.00
```

### 4. `calculatorV2.c`

This program is an upgraded version of the calculator from Day 04.

The calculator still uses a menu and `switch-case`, but the arithmetic operations are now moved into separate functions.

The purpose of this exercise was to practice:

- function-based program structure
- calculator refactoring
- reusable arithmetic functions
- cleaner `main` logic
- division by zero handling

The calculator supports:

```txt
+
-
*
/
E or e for exit
```

Example 1 – Addition:

```txt
+
10
5
```

Expected output:

```txt
15.00
```

Example 2 – Subtraction:

```txt
-
10
5
```

Expected output:

```txt
5.00
```

Example 3 – Multiplication:

```txt
*
4
2
```

Expected output:

```txt
8.00
```

Example 4 – Division:

```txt
/
10
2
```

Expected output:

```txt
5.00
```

Example 5 – Division by zero:

```txt
/
10
0
```

Expected output:

```txt
You can not divide with a zero
```

Example 6 – Exit:

```txt
E
```

Expected output:

```txt
Program exits.
```

## Concepts Used

- functions
- function parameters
- return values
- function prototypes
- `int`
- `float`
- `double`
- `scanf`
- `printf`
- `switch-case`
- basic refactoring
- division by zero handling

## What I Learned

I learned that functions help split a program into smaller and clearer parts.

I learned that `main` should control the program flow, while functions should handle specific tasks.

I learned how to pass values into a function using parameters.

I learned how to return a value from a function and use that value in `main`.

I learned that refactoring means improving the structure of a program while keeping the same behavior.

I also learned that a calculator becomes easier to read when each operation has its own function.

## Tests

I tested:

- finding the higher of two different numbers
- finding the higher value when both numbers are equal
- calculating the average of whole numbers
- calculating the average of decimal numbers
- converting km/h to m/s
- calculator addition
- calculator subtraction
- calculator multiplication
- calculator division
- division by zero
- invalid calculator operation
- calculator exit option

## How to Compile and Run

Compile and run `max2.c`:

```bash
gcc max2.c -o max2.exe
./max2.exe
```

Compile and run `average3.c`:

```bash
gcc average3.c -o average3.exe
./average3.exe
```

Compile and run `kmh_to_ms.c`:

```bash
gcc kmh_to_ms.c -o kmh_to_ms.exe
./kmh_to_ms.exe
```

Compile and run `calculatorV2.c`:

```bash
gcc calculatorV2.c -o calculatorV2.exe
./calculatorV2.exe
```

On Windows PowerShell:

```powershell
.\max2.exe
.\average3.exe
.\kmh_to_ms.exe
.\calculatorV2.exe
```

## Common Mistakes I Need to Avoid

I should not declare a function as `void` if it returns a value.

If a function returns a number, it should use a return type such as `int`, `float`, or `double`.

I should not forget to store or print the value returned by a function.

I should not calculate everything directly inside `main` when a separate function would make the code cleaner.

I should not use `%f` with `scanf` when reading a `double`; for `double`, I should use `%lf`.

I should check division by zero before calling the division function.

## Engineering Explanation

Functions are important in engineering because larger programs cannot be written as one long `main` function.

In embedded systems, automotive software, and telemetry tools, code is usually split into smaller parts.

Each function should have one clear responsibility.

For example:

- one function calculates a value
- one function converts units
- one function checks a condition
- one function processes sensor data
- one function formats output

The `kmh_to_ms.c` exercise is an example of an engineering conversion function.

The `calculatorV2.c` exercise is an example of refactoring. The calculator works like before, but the code is cleaner because each arithmetic operation has its own function.

This is the same idea that will later be used in larger projects such as telemetry analyzers, CAN parsers, and embedded data loggers.

## GitHub Commit

The commit message for this day should be:

```txt
Day 07: added function exercises and calculator refactor
```

## Level-Up Check

I can move on from Day 07 because:

- all programs compile without errors
- I can write a function with parameters
- I can return a value from a function
- I understand the difference between `void`, `int`, `float`, and `double` return types
- I can call a function from `main`
- I can use the returned value
- I refactored the calculator to use functions
- I can explain why functions make code cleaner

## Final Status

Day 07 is complete.

I practiced functions, parameters, return values, unit conversion, and calculator refactoring.

Next step: Day 08 – arrays.
