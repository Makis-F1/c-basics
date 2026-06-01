# Day 01 – Basic C Program Structure and Arithmetic

## Overview

This folder contains my first C programming exercises.

The goal of Day 01 was to set up the basic C workflow, write simple programs, compile them with GCC, run them from the terminal, and document the results.

This day is important because it confirms that my development environment works correctly and that I understand the basic structure of a C program.

## Files in This Folder

```txt
day01/
├── Hello.c
├── average.c
├── conversion.c
├── name.c
└── README.md
```

## Exercises Completed

### 1. `Hello.c`

This program prints a simple message to the terminal.

The purpose of this exercise was to confirm that:

- Visual Studio Code works
- GCC works
- the terminal workflow works
- the program can be compiled and executed successfully

Expected output:

```txt
Hello F1 Engineering!
```

### 2. `name.c`

This program prints my name and basic information.

The purpose of this exercise was to practice:

- writing text output
- using `printf`
- understanding the structure of a C program

Example output:

```txt
My name is Makis.
I am learning C programming.
```

### 3. `average.c`

This program reads three numbers and prints their average.

The purpose of this exercise was to practice:

- using variables
- reading input with `scanf`
- doing arithmetic calculations
- printing a result with `printf`

Example input:

```txt
2
2
2
```

Expected output:

```txt
Their average is: 2
```

Another example input:

```txt
3
4
5
```

Expected output:

```txt
Their average is: 4
```

### 4. `conversion.c`

This program converts kilometers to meters.

The purpose of this exercise was to practice:

- using multiplication
- reading user input
- converting one unit into another
- printing the result clearly

Example input:

```txt
1
```

Expected output:

```txt
1000
```

Another example input:

```txt
5
```

Expected output:

```txt
5000
```

## Concepts Used

In these exercises I used the following C programming concepts:

- `#include <stdio.h>`
- `int main(void)`
- `printf`
- `scanf`
- variables
- basic arithmetic
- multiplication
- average calculation
- GCC compilation
- terminal execution

## What I Learned

Through these exercises, I learned that every C program starts from the `main` function.

I learned that `#include <stdio.h>` gives access to standard input and output functions such as `printf` and `scanf`.

I learned that `printf` is used to print text or values to the terminal.

I learned that `scanf` is used to read input from the user.

I learned that variables store values in memory and can be used in calculations.

I learned how to compile a C file using GCC.

I learned that even simple programs should be tested with different inputs.

## Testing

I tested each program with multiple inputs.

### Test 1 – Average of Equal Numbers

Input:

```txt
2
2
2
```

Expected output:

```txt
Their average is: 2
```

Result:

```txt
Passed
```

### Test 2 – Average of Different Numbers

Input:

```txt
3
4
5
```

Expected output:

```txt
Their average is: 4
```

Result:

```txt
Passed
```

### Test 3 – Kilometer to Meter Conversion

Input:

```txt
1
```

Expected output:

```txt
1000
```

Result:

```txt
Passed
```

### Test 4 – Larger Kilometer Value

Input:

```txt
5
```

Expected output:

```txt
5000
```

Result:

```txt
Passed
```

## How to Compile and Run

### Compile and run `Hello.c`

```bash
gcc Hello.c -o Hello.exe
./Hello.exe
```

On Windows PowerShell:

```powershell
.\Hello.exe
```

### Compile and run `average.c`

```bash
gcc average.c -o average.exe
./average.exe
```

On Windows PowerShell:

```powershell
.\average.exe
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

### Compile and run `name.c`

```bash
gcc name.c -o name.exe
./name.exe
```

On Windows PowerShell:

```powershell
.\name.exe
```

## Common Mistakes I Need to Avoid

I should not forget the semicolon `;` at the end of statements.

I should not forget to use `&` inside `scanf`.

Correct:

```c
scanf("%d", &number);
```

Incorrect:

```c
scanf("%d", number);
```

I should not commit `.exe` files to GitHub because executable files are generated after compilation.

That is why the root repository should contain a `.gitignore` file with:

```txt
*.exe
```

## Engineering Explanation

Even though these exercises are simple, they are the foundation for later engineering work.

In embedded systems and telemetry, programs often:

- read values
- store them in variables
- process them
- convert units
- print or transmit results

The conversion exercise is a very simple example of unit conversion, which is important in engineering.

Later, I will use the same idea for conversions such as:

- km/h to m/s
- ADC value to voltage
- raw sensor value to physical value

## GitHub Commit

The commit message for this day should be:

```txt
Day 01: added basic C exercises
```

## Level-Up Check

I can move on from Day 01 because:

- all programs compile without errors
- I understand what `main` does
- I understand what `printf` does
- I understand what `scanf` does
- I can compile and run programs from the terminal
- I tested the programs with more than one input
- I can explain the purpose of each file

## Final Status

Day 01 is complete.

The development environment works, the first C programs are written, the programs were tested, and the folder is documented.

Next step: Day 02 – user input, math formulas, and basic engineering calculations.
