# C Basics

This repository contains my first C programming exercises as part of my long-term engineering roadmap toward embedded systems, automotive software, telemetry, Formula Student, and motorsport/F1-related skills.

The goal of this repository is not only to write code, but also to learn how to think, test, document, and work like an engineer.

## Main Goals

Through this repository I am learning:

- basic C programming
- how to compile C programs with GCC
- how to use the terminal
- how to organize code into folders
- how to use Git and GitHub
- how to write clean README documentation
- how to test programs with multiple inputs
- how to explain code clearly
- how to build foundations for embedded systems and telemetry projects

## Tools Used

- C programming language
- GCC compiler
- Visual Studio Code
- Git
- GitHub
- Windows PowerShell / Terminal

## Repository Structure

```txt
c-basics/
├── README.md
├── .gitignore
│
├── day01/
│   ├── Hello.c
│   ├── average.c
│   ├── conversion.c
│   ├── name.c
│   └── README.md
│
├── day02/
│   ├── average_speed.c
│   ├── circle.c
│   ├── conversion.c
│   ├── sum_two_numbers.c
│   └── README.md
│
├── day03/
│   ├── Alarm.c
│   ├── highest_number.c
│   ├── leap_year.c
│   ├── odd_even.c
│   └── README.md
│
├── day04/
    ├── calculator.c
    └── README.md
├── day05/
│   ├── multiplication_table.c
│   ├── numbers.c
│   ├── sum_of_n_numbers.c
│   ├── threshold.c
│   └── README.md
│
├── day06/
│   ├── Validation.c
│   ├── guess.c
│   ├── input.c
│   ├── speed.c
│   └── README.md
├── day07/
│   ├── average3.c
│   ├── calculatorV2.c
│   ├── kmh_to_ms.c
│   ├── max2.c
│   └── README.md
```

## Progress

- [x] Day 01 – Basic output, variables, average calculation, and unit conversion
- [x] Day 02 – User input, math formulas, speed calculation, and unit conversion
- [x] Day 03 – Conditional logic, even/odd check, highest number, leap year, and sensor alarm
- [x] Day 04 – Switch-case calculator with error handling
- [x] Day 05 – For loops, sums, multiplication tables, and threshold counting
- [x] Day 06 – While loops, input validation, guessing game, and speed decrease counting
- [x] Day 07 – Functions, return values, unit conversion, and calculator refactoring
- [ ] Day 08 – Arrays

## Current Focus

I am currently building the foundation of C programming.

The focus is on:

- writing simple C programs
- using input and output
- understanding conditions
- testing edge cases
- documenting every exercise
- building a professional GitHub workflow

## How to Compile and Run

Example from the root folder:

```bash
cd day01
gcc Hello.c -o Hello.exe
./Hello.exe
```

On Windows PowerShell:

```powershell
.\Hello.exe
```

Another example:

```bash
cd day04
gcc calculator.c -o calculator.exe
./calculator.exe
```

On Windows PowerShell:

```powershell
.\calculator.exe
```

## Commit Message Style

I use clear commit messages that describe what was added or changed.

Good examples:

```txt
Day 01: added basic C exercises
Day 02: implemented math and conversion exercises
Day 03: added conditional logic exercises
Day 04: created switch-based calculator with error handling
```

Bad examples I avoid:

```txt
update
fix
changes
final
```

## What I Am Practicing

Through this repository I am practicing:

- basic C syntax
- compiling with GCC
- terminal workflow
- organizing files by topic
- documenting my work
- testing programs with different inputs
- writing meaningful commit messages

## Long-Term Direction

This repository is part of my preparation for:

- embedded systems
- automotive software
- Formula Student
- telemetry and data logging
- motorsport engineering

## General Testing Rule

Before committing, I should always check:

- the code compiles without errors
- the program gives the expected output
- at least one edge case was tested
- the file is saved in the correct folder
- the README is updated
- the commit message is clear

## Next Steps

After Day 07, I will continue with:

- Day 08 – Arrays

These topics will prepare me for larger programs such as:

- calculator v2
- console statistics tool
- telemetry analyzer
- sensor data simulator
