# Day 04 – Switch-Case Calculator

## Overview

This folder contains my first small calculator project in C.

The goal of Day 04 was to practice `switch-case`, menu-based programs, basic error handling, and program repetition using a loop.

This is the first exercise that feels more like a small project instead of only a single isolated task.

## Files in This Folder

```txt
day04/
├── calculator.c
└── README.md
```

## Project Completed

### `calculator.c`

This program is a simple calculator that supports four basic arithmetic operations:

- addition
- subtraction
- multiplication
- division

The program also gives the user an option to exit.

## Required Menu

The calculator should show a menu similar to this:

```txt
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
```

The user chooses an option, enters two numbers, and the program prints the result.

## Concepts Used

In this project I used the following C programming concepts:

- `switch-case`
- `default`
- `do while`
- `if`
- user input
- arithmetic operators
- division by zero check
- menu design
- basic error handling

## Example Runs

### Example 1 – Addition

Input:

```txt
1
10
5
```

Expected output:

```txt
Result: 15.00
```

### Example 2 – Subtraction

Input:

```txt
2
10
5
```

Expected output:

```txt
Result: 5.00
```

### Example 3 – Multiplication

Input:

```txt
3
4
2
```

Expected output:

```txt
Result: 8.00
```

### Example 4 – Division

Input:

```txt
4
10
2
```

Expected output:

```txt
Result: 5.00
```

### Example 5 – Division by Zero

Input:

```txt
4
10
0
```

Expected output:

```txt
You can not divide with zero.
```

### Example 6 – Invalid Operation

Input:

```txt
9
```

Expected output:

```txt
Invalid operation.
```

### Example 7 – Exit

Input:

```txt
5
```

Expected output:

```txt
Exiting program.
```

## What I Learned

I learned that `switch-case` is useful when one variable can have several possible values.

I learned that `case` blocks make the code cleaner than writing many separate `if` statements for menu choices.

I learned that the `default` case is used when the user enters an invalid option.

I learned that division by zero must be handled before performing division.

I learned that `do while` is useful for menu programs because the menu should appear at least once.

I learned that a program can repeat until the user chooses to exit.

## Testing

I tested the calculator with all supported operations.

### Test 1 – Addition

Input:

```txt
1
10
5
```

Expected output:

```txt
Result: 15.00
```

Result:

```txt
Passed
```

### Test 2 – Subtraction

Input:

```txt
2
10
5
```

Expected output:

```txt
Result: 5.00
```

Result:

```txt
Passed
```

### Test 3 – Multiplication

Input:

```txt
3
4
2
```

Expected output:

```txt
Result: 8.00
```

Result:

```txt
Passed
```

### Test 4 – Division

Input:

```txt
4
10
2
```

Expected output:

```txt
Result: 5.00
```

Result:

```txt
Passed
```

### Test 5 – Division by Zero

Input:

```txt
4
10
0
```

Expected output:

```txt
You can not divide with zero.
```

Result:

```txt
Passed
```

### Test 6 – Invalid Menu Option

Input:

```txt
9
```

Expected output:

```txt
Invalid operation.
```

Result:

```txt
Passed
```

## How to Compile and Run

### Compile and run `calculator.c`

```bash
gcc calculator.c -o calculator.exe
./calculator.exe
```

On Windows PowerShell:

```powershell
.\calculator.exe
```

## Common Mistakes I Need to Avoid

I should not perform division before checking if the second number is zero.

Incorrect logic:

```c
result = a / b;
if (b == 0) {
    printf("Error");
}
```

Correct logic:

```c
if (b == 0) {
    printf("You can not divide with zero.");
} else {
    result = a / b;
}
```

I should not forget the `break` statement in each `case`, because without `break` the program can continue into the next case.

I should not use only `if` statements for this menu because `switch-case` makes the structure cleaner.

## Engineering Explanation

This calculator is a small but important step toward building real programs.

It combines multiple concepts:

- input
- arithmetic
- conditions
- menu logic
- error handling
- loops

In engineering software, programs often give the user or system several possible actions.

A calculator menu is a simple example of this idea.

Later, the same structure can be used for:

- telemetry menu tools
- sensor test programs
- configuration tools
- diagnostic programs
- embedded system test menus

## GitHub Commit

The commit message for this day should be:

```txt
Day 04: created switch-based calculator with error handling
```

## Level-Up Check

I can move on from Day 04 because:

- the calculator supports all four operations
- division by zero is handled correctly
- invalid menu options are handled with `default`
- the program repeats until the user chooses to exit
- I understand how `switch-case` works
- I understand why `do while` is useful for menu programs
- I can explain the calculator logic without only reading the code line by line

## Final Status

Day 04 is complete.

I created a simple calculator using `switch-case`, `do while`, and basic error handling.

This calculator can be improved later by adding functions, better validation, and separate files.

Next step: Day 05 – for loops.
