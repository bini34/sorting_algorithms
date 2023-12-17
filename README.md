write a C program that sorts an array of integers using the Merge sort algorithm. The program should include a README.md file to provide information about the project, how to compile and run the code, and any additional details.

Here's a sample README.md file based on the provided information:

```markdown
# Sorting Algorithms Project

## Project Overview

This project involves implementing various sorting algorithms in the C programming language. The algorithms covered include Bubble sort, Insertion sort, Selection sort, Quick sort, Shell sort (Knuth Sequence), Cocktail shaker sort, Counting sort, and Merge sort. Each algorithm is implemented in a separate C file and includes documentation on its time complexity.

## Team Information

- **Author:** Alexandre Gautier
- **Team:** biniyam BEYENE

## Project Schedule

- **Start Date:** December 13, 2023, 6:00 AM
- **End Date:** December 20, 2023, 6:00 AM
- **Checker Release:** December 15, 2023, 12:00 AM
- **Auto Review Deadline:** Deadline at the project end

## Learning Objectives

Upon completion of this project, the team is expected to:

- Implement at least four different sorting algorithms in C.
- Understand and apply the Big O notation to evaluate the time complexity of algorithms.
- Select the appropriate sorting algorithm for a given input.
- Implement a stable sorting algorithm.

## Resources

To prepare for this project, the team is recommended to read or watch resources on:

- Sorting algorithms
- Big O notation
- Sorting algorithms animations
- CS50 Algorithms explanation in detail by David Malan
- All about sorting algorithms

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Code compilation on Ubuntu 20.04 LTS using gcc with specific options (-Wall -Werror -Wextra -pedantic -std=gnu89).
- Code should follow the Betty style.
- No global variables allowed.
- No more than 5 functions per file.
- Unless specified otherwise, the standard library is not allowed.
- Header file named `sort.h` with function prototypes.
- All header files should be include guarded.
- List/array does not need to be sorted if its size is less than 2.
- One project repository per group to avoid scoring issues.

### Data Structure and Functions

- Doubly linked list node structure named `listint_t` provided.
- Functions `print_array` and `print_list` provided for printing arrays and linked lists.
- Prototypes of the functions should be included in `sort.h`.
- Use the Lomuto partition scheme for Quick sort.

### Big O Notations

- Each sorting algorithm file (e.g., 0-bubble_sort.c) should include a corresponding file (e.g., 0-O) with Big O notations for best, average, and worst cases.

## Instructions for Testing

To test the sorting algorithms with big sets of random integers, you can use Random.org.

## How to Compile and Run

To compile the project, use the following commands:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o sorting_algorithms
```

To run the program:

```bash
./sorting_algorithms
```

