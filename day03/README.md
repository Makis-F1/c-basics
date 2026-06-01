# Day 03 – Conditional Logic and Decision-Making

## Overview

This folder contains C exercises focused on conditional logic.

The goal of Day 03 was to practice `if`, `else if`, `else`, comparison operators, logical operators, and basic decision-making in programs.

## Files in This Folder

```txt
day03/
├── Alarm.c
├── highest_number.c
├── leap_year.c
├── odd_even.c
└── README.md
```

## Exercises Completed

### 1. `odd_even.c`

This program reads an integer and checks whether the number is even or odd.

The purpose of this exercise was to practice:

- `if`
- `else`
- modulo operator `%`
- logical thinking

Example input:

```txt
8
```

Expected output:

```txt
The number is even.
```

Another example input:

```txt
11
```

Expected output:

```txt
The number is odd.
```

Edge case input:

```txt
0
```

Expected output:

```txt
The number is even.
```

### 2. `highest_number.c`

This program reads three numbers from the user and prints the highest one.

The purpose of this exercise was to practice:

- comparisons
- multiple `if` statements
- storing a temporary maximum value
- edge cases with negative numbers

Example input:

```txt
5
9
3
```

Expected output:

```txt
Highest number is: 9
```

Another example input:

```txt
10
10
7
```

Expected output:

```txt
Highest number is: 10
```

Negative number example:

```txt
-5
-2
-9
```

Expected output:

```txt
Highest number is: -2
```

### 3. `leap_year.c`

This program checks whether a year is a leap year.

The purpose of this exercise was to practice:

- multiple conditions
- logical operators
- exception rules
- real-world conditional logic

Leap year rules:

```txt
A year is a leap year if it is divisible by 4,
but not if it is divisible by 100,
unless it is also divisible by 400.
```

Example input:

```txt
2024
```

Expected output:

```txt
2024 is a leap year.
```

Example input:

```txt
1900
```

Expected output:

```txt
1900 is not a leap year.
```

Example input:

```txt
2000
```

Expected output:

```txt
2000 is a leap year.
```

### 4. `Alarm.c`

This program simulates a simple sensor alarm.

The user enters a temperature. If the temperature is higher than the limit, the program prints an alarm message.

The purpose of this exercise was to practice:

- threshold checks
- simulated sensor values
- conditional logic
- basic safety logic

Example input:

```txt
120
```

Expected output:

```txt
ALARM
```

Example input:

```txt
80
```

Expected output:

```txt
Status normal.
```

## Concepts Used

In these exercises I used the following C programming concepts:

- `if`
- `else if`
- `else`
- comparison operators
- logical operators
- modulo operator `%`
- threshold logic
- edge case testing
- decision-making

## What I Learned

I learned that `if`, `else if`, and `else` allow a program to make decisions.

I learned that the modulo operator `%` can be used to check if a number is divisible by another number.

I learned that conditions must be tested carefully, especially when there are special cases.

I learned that the highest number problem should not start with `0` as the maximum value, because negative numbers would produce the wrong result.

I learned that leap year logic has exceptions and cannot be solved only by checking divisibility by 4.

I learned that a sensor can be simulated by user input before using real hardware.

## Testing

I tested all programs with normal inputs and edge cases.

### Test 1 – Even Number

Input:

```txt
8
```

Expected output:

```txt
The number is even.
```

Result:

```txt
Passed
```

### Test 2 – Odd Number

Input:

```txt
11
```

Expected output:

```txt
The number is odd.
```

Result:

```txt
Passed
```

### Test 3 – Highest Number

Input:

```txt
5
9
3
```

Expected output:

```txt
Highest number is: 9
```

Result:

```txt
Passed
```

### Test 4 – Highest Negative Number

Input:

```txt
-5
-2
-9
```

Expected output:

```txt
Highest number is: -2
```

Result:

```txt
Passed
```

### Test 5 – Leap Year

Input:

```txt
2024
```

Expected output:

```txt
2024 is a leap year.
```

Result:

```txt
Passed
```

### Test 6 – Century Year That Is Not Leap Year

Input:

```txt
1900
```

Expected output:

```txt
1900 is not a leap year.
```

Result:

```txt
Passed
```

### Test 7 – Century Year That Is Leap Year

Input:

```txt
2000
```

Expected output:

```txt
2000 is a leap year.
```

Result:

```txt
Passed
```

### Test 8 – Sensor Alarm

Input:

```txt
120
```

Expected output:

```txt
ALARM
```

Result:

```txt
Passed
```

## How to Compile and Run

### Compile and run `odd_even.c`

```bash
gcc odd_even.c -o odd_even.exe
./odd_even.exe
```

On Windows PowerShell:

```powershell
.\odd_even.exe
```

### Compile and run `highest_number.c`

```bash
gcc highest_number.c -o highest_number.exe
./highest_number.exe
```

On Windows PowerShell:

```powershell
.\highest_number.exe
```

### Compile and run `leap_year.c`

```bash
gcc leap_year.c -o leap_year.exe
./leap_year.exe
```

On Windows PowerShell:

```powershell
.\leap_year.exe
```

### Compile and run `Alarm.c`

```bash
gcc Alarm.c -o Alarm.exe
./Alarm.exe
```

On Windows PowerShell:

```powershell
.\Alarm.exe
```

## Common Mistakes I Need to Avoid

I should not write conditions without thinking about edge cases.

For the highest number exercise, I should not initialize the highest value to `0`, because this gives the wrong result if all entered numbers are negative.

Better approach:

```c
highest = firstNumber;
```

Then compare the other numbers against it.

For leap year logic, I should not only check:

```c
year % 4 == 0
```

because years divisible by 100 need special handling.

## Engineering Explanation

Conditional logic is one of the most important programming concepts.

In embedded systems and automotive software, conditions are used for:

- checking sensor values
- triggering alarms
- validating inputs
- detecting unsafe states
- deciding what action the system should take

The sensor alarm exercise is a simple simulation of real embedded safety logic.

Later, similar logic can be used for:

- temperature warning systems
- battery voltage checks
- brake pressure thresholds
- telemetry event detection

## GitHub Commit

The commit message for this day should be:

```txt
Day 03: added conditional logic exercises
```

## Level-Up Check

I can move on from Day 03 because:

- all programs compile without errors
- I can use `if`, `else if`, and `else`
- I understand how `%` works
- I can explain leap year logic
- I tested negative numbers
- I tested boundary cases
- I understand how a sensor alarm can be simulated with user input

## Final Status

Day 03 is complete.

I learned how conditions work in a program and how decision-making can be used for simple engineering-style problems.

Next step: Day 04 – switch-case calculator.
