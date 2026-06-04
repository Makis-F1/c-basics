# Day 08 – Arrays and Basic Statistics

## Overview

This folder contains C exercises focused on arrays.

The goal of Day 08 was to learn how to store multiple values in one array, process those values using loops, and calculate basic statistics such as maximum, minimum, average, and values above average.

This day is important because arrays are one of the first steps toward processing telemetry-style data, sensor readings, and larger groups of measurements.

## Files in This Folder

```txt
day08/
├── above_average.c
├── average.c
├── max.c
├── min.c
└── README.md
```

## Exercises Completed

### 1. `max.c`

This program reads the size of an array, then reads the values inside the array, and finds the highest number.

The purpose of this exercise was to practice:

- arrays
- loops
- finding a maximum value
- validating array size
- comparing each value with the current maximum

Example input:

```txt
5
10
25
7
30
18
```

Expected output:

```txt
The highest number in this array is: 30.00
```

Second example input:

```txt
4
-5
-2
-9
-1
```

Expected output:

```txt
The highest number in this array is: -1.00
```

### 2. `min.c`

This program reads the size of an array, then reads the values inside the array, and finds the lowest number.

The purpose of this exercise was to practice:

- arrays
- loops
- finding a minimum value
- validating array size
- comparing each value with the current minimum

Example input:

```txt
5
10
25
7
30
18
```

Expected output:

```txt
The lowest number in this array is: 7.00
```

Second example input:

```txt
4
-5
-2
-9
-1
```

Expected output:

```txt
The lowest number in this array is: -9.00
```

### 3. `average.c`

This program reads the size of an array, reads the values inside the array, and calculates the average value using a function.

The purpose of this exercise was to practice:

- arrays
- functions with arrays
- passing an array to a function
- summing array elements
- returning a calculated result

Example input:

```txt
5
10
20
30
40
50
```

Expected output:

```txt
The average of this array is: 30.00
```

Second example input:

```txt
3
2.5
3.5
4.0
```

Expected output:

```txt
The average of this array is: 3.33
```

### 4. `above_average.c`

This program reads the size of an array, reads the values inside the array, calculates the average, and prints all numbers that are above the average.

The purpose of this exercise was to practice:

- arrays
- functions
- average calculation
- comparing values with the average
- counting values that meet a condition
- printing selected values from an array

Example input:

```txt
5
10
20
30
40
50
```

Average:

```txt
30.00
```

Expected output:

```txt
These numbers in the array are above average:
40.00
50.00
```

Second example input:

```txt
4
5
5
5
5
```

Expected output:

```txt
There are no numbers above average.
```

## Concepts Used

- arrays
- array indexing
- `for` loops
- array size validation
- maximum value search
- minimum value search
- average calculation
- functions with arrays
- comparison logic
- values above average
- `#define MAX 100`

## What I Learned

I learned that an array can store multiple values of the same type.

I learned that array indexing starts from `0`.

I learned how to use a loop to read values into an array.

I learned how to process all values in an array using a `for` loop.

I learned that the first element of an array can be used as the starting value for maximum or minimum calculations.

I learned how to pass an array into a function.

I learned that arrays are useful for processing multiple measurements, such as sensor readings or telemetry samples.

## Tests

I tested:

- arrays with positive numbers
- arrays with negative numbers
- arrays with decimal numbers
- arrays where all values are equal
- invalid array sizes
- maximum value detection
- minimum value detection
- average calculation
- values above average
- the case where no value is above average

## How to Compile and Run

Compile and run `max.c`:

```bash
gcc max.c -o max.exe
./max.exe
```

Compile and run `min.c`:

```bash
gcc min.c -o min.exe
./min.exe
```

Compile and run `average.c`:

```bash
gcc average.c -o average.exe
./average.exe
```

Compile and run `above_average.c`:

```bash
gcc above_average.c -o above_average.exe
./above_average.exe
```

On Windows PowerShell:

```powershell
.\max.exe
.\min.exe
.\average.exe
.\above_average.exe
```

## Common Mistakes I Need to Avoid

I should not access an array outside of its valid range.

If the array size is 100, the valid indexes are from `0` to `99`.

I should always validate the array size before reading values into the array.

I should not initialize maximum or minimum values to `0`, because that can give wrong results when all values are negative.

A better approach is to use the first entered array element as the starting maximum or minimum value.

I should not forget that array indexing starts from `0`.

I should also remember that when passing an array to a function, I pass the array name, not a single element.

## Engineering Explanation

Arrays are important in engineering because real systems usually work with many measurements, not just one value.

In telemetry, embedded systems, and automotive software, data often comes as a sequence of samples.

Examples include:

- speed samples
- temperature readings
- voltage measurements
- sensor values
- braking data
- throttle position data

The exercises in this folder are simple versions of real data processing tasks.

Finding the maximum value is similar to finding the highest speed or highest temperature.

Finding the minimum value is similar to finding the lowest voltage or lowest sensor reading.

Calculating the average is useful for understanding the general behavior of a signal.

Finding values above average is similar to detecting samples that stand out from normal behavior.

This is why arrays are important for future telemetry analyzers, sensor processing, and embedded data logging.

## GitHub Commit

The commit message for this day should be:

```txt
Day 08: added array statistics exercises
```

## Level-Up Check

I can move on from Day 08 because:

- all programs compile without errors
- I can declare and use an array
- I understand that array indexing starts from `0`
- I can validate the array size
- I can find the maximum value in an array
- I can find the minimum value in an array
- I can calculate the average of an array
- I can pass an array to a function
- I can print values that are above the average
- I can explain why arrays are useful for telemetry-style data

## Final Status

Day 08 is complete.

I practiced arrays, array indexing, loops, min/max calculations, average calculation, functions with arrays, and values above average.

Next step: Day 09 – strings and character arrays.
