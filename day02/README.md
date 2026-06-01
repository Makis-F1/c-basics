# Day 02 – User Input, Math Formulas, and Unit Conversion

## Overview

This folder contains C exercises focused on user input, mathematical formulas, speed calculation, and unit conversion.

The goal of Day 02 was to practice using `scanf`, basic arithmetic, formulas, and clear output formatting.

## Files in This Folder

```txt
day02/
├── average_speed.c
├── circle.c
├── conversion.c
├── sum_two_numbers.c
└── README.md
```

## Exercises Completed

### 1. `sum_two_numbers.c`

This program reads two numbers from the user and prints their sum.

The purpose of this exercise was to practice:

- user input
- integer variables
- addition
- `scanf`
- `printf`

Example input:

```txt
5
7
```

Expected output:

```txt
Sum is: 12
```

Another example input:

```txt
-3
10
```

Expected output:

```txt
Sum is: 7
```

### 2. `circle.c`

This program calculates the perimeter and area of a circle based on the radius entered by the user.

The purpose of this exercise was to practice:

- using formulas
- working with decimal values
- understanding how mathematical formulas become code

Formula for perimeter:

```txt
perimeter = 2 * radius * pi
```

Formula for area:

```txt
area = radius * radius * pi
```

Example input:

```txt
5
```

Expected output:

```txt
Perimeter: 31.40
Area: 78.50
```

### 3. `average_speed.c`

This program calculates average speed from distance and time.

The purpose of this exercise was to practice:

- division
- engineering formulas
- reading two input values
- calculating a real-world quantity

Formula:

```txt
average speed = distance / time
```

Example input:

```txt
100
2
```

Expected output:

```txt
Average speed: 50.00
```

Another example input:

```txt
150
3
```

Expected output:

```txt
Average speed: 50.00
```

### 4. `conversion.c`

This program converts speed from km/h to m/s.

The purpose of this exercise was to practice:

- unit conversion
- division
- basic engineering thinking

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
10.00
```

Another example input:

```txt
72
```

Expected output:

```txt
20.00
```

## Concepts Used

In these exercises I used the following C programming concepts:

- `#include <stdio.h>`
- `int main(void)`
- `printf`
- `scanf`
- integer variables
- floating-point variables
- addition
- multiplication
- division
- formulas
- unit conversion

## What I Learned

I learned how to read input from the user using `scanf`.

I learned that formulas from math and physics can be translated directly into C code.

I learned that `float` or `double` should be used when the result can be decimal.

I learned that average speed is calculated by dividing distance by time.

I learned that km/h can be converted to m/s by dividing by 3.6.

I learned that clear output is important because the user needs to understand the result.

## Testing

I tested all programs with several input values.

### Test 1 – Sum of Two Numbers

Input:

```txt
5
7
```

Expected output:

```txt
Sum is: 12
```

Result:

```txt
Passed
```

### Test 2 – Circle Calculation

Input:

```txt
5
```

Expected output:

```txt
Perimeter: 31.40
Area: 78.50
```

Result:

```txt
Passed
```

### Test 3 – Average Speed

Input:

```txt
100
2
```

Expected output:

```txt
Average speed: 50.00
```

Result:

```txt
Passed
```

### Test 4 – km/h to m/s Conversion

Input:

```txt
36
```

Expected output:

```txt
10.00
```

Result:

```txt
Passed
```

## How to Compile and Run

### Compile and run `sum_two_numbers.c`

```bash
gcc sum_two_numbers.c -o sum_two_numbers.exe
./sum_two_numbers.exe
```

On Windows PowerShell:

```powershell
.\sum_two_numbers.exe
```

### Compile and run `circle.c`

```bash
gcc circle.c -o circle.exe
./circle.exe
```

On Windows PowerShell:

```powershell
.\circle.exe
```

### Compile and run `average_speed.c`

```bash
gcc average_speed.c -o average_speed.exe
./average_speed.exe
```

On Windows PowerShell:

```powershell
.\average_speed.exe
```

### Compile and run `conversion.c`

```bash
gcc conversion.c -o conversion.exe
./conversion.exe
```

On Windows PowerShell:

```powershell
.\conversion.exe
```

## Common Mistakes I Need to Avoid

I should not use integer division when I expect a decimal result.

For example, if both values are integers, the result may lose decimal precision.

I should use `float` or `double` for speed, area, perimeter, and conversion calculations.

I should not forget to check if time is zero in future versions of `average_speed.c`, because division by zero is invalid.

## Engineering Explanation

These exercises are important because they connect programming with real engineering calculations.

In motorsport and embedded systems, software often needs to:

- read a value
- apply a formula
- convert units
- print or transmit the result

The average speed exercise is directly connected to telemetry, because speed is one of the most important values in motorsport data.

The km/h to m/s conversion is also useful because different systems use different units.

## GitHub Commit

The commit message for this day should be:

```txt
Day 02: implemented math and conversion exercises
```

## Level-Up Check

I can move on from Day 02 because:

- all programs compile without errors
- I can use `scanf` for user input
- I can translate simple formulas into code
- I can calculate average speed
- I can convert km/h to m/s
- I understand why decimal values require `float` or `double`
- I tested each program with multiple inputs

## Final Status

Day 02 is complete.

I practiced user input, basic formulas, speed calculation, circle calculations, and unit conversion.

Next step: Day 03 – conditional logic and decision-making.
