# Piscine Reloaded - Back to C Programming Basics

## Introduction
The Piscine Reloaded is a collection of exercises designed to refresh C programming fundamentals. All exercises must be completed in sequence to unlock subsequent projects.

## General Rules
- All exercises must comply with the given rules and procedures
- Code will be checked by Moulinette with flags: -Wall -Wextra -Werror
- Shell exercises must be executable with /bin/sh
- No additional files beyond those specified are allowed
- All work must pass the Norminator check
- Using forbidden functions results in a -42 grade

## Exercises

### Exercise 00: Oh yeah, mooore...
- **Directory**: ex00/
- **Files**: exo.tar
- Create specific files and directories with exact permissions
- Use `ls -l` to verify correct structure
- Create archive with `tar -cf exo.tar *`

### Exercise 01: Z
- **Directory**: ex01/
- **Files**: z
- Create a file that outputs "Z" followed by newline when used with cat

### Exercise 02: clean
- **Directory**: ex02/
- **Files**: clean
- Create command to find and delete files ending with ~ or enclosed by #
- Single command only, no semicolons or &&

### Exercise 03: find_sh
- **Directory**: ex03/
- **Files**: find_sh.sh
- Write command to find .sh files and display names without extension

### Exercise 04: MAC
- **Directory**: ex04/
- **Files**: MAC.sh
- Display machine's MAC addresses, each followed by newline

### Exercise 05: Can you create it?
- **Directory**: ex05/
- **Files**: "\?$*'KwaMe'*$?\"
- Create file containing only "42"

### Exercise 06: ft_print_alphabet
- **Directory**: ex06/
- **Files**: ft_print_alphabet.c
- Function to display alphabet in lowercase
- Prototype: `void ft_print_alphabet(void);`

### Exercise 07: ft_print_numbers
- **Directory**: ex07/
- **Files**: ft_print_numbers.c
- Function to display all digits in ascending order
- Prototype: `void ft_print_numbers(void);`

### Exercise 08: ft_is_negative
- **Directory**: ex08/
- **Files**: ft_is_negative.c
- Display 'N' or 'P' based on number's sign
- Prototype: `void ft_is_negative(int n);`

### Exercise 09: ft_ft
- **Directory**: ex09/
- **Files**: ft_ft.c
- Set integer value to 42 via pointer
- Prototype: `void ft_ft(int *nbr);`

### Exercise 10: ft_swap
- **Directory**: ex10/
- **Files**: ft_swap.c
- Swap values of two integers using pointers
- Prototype: `void ft_swap(int *a, int *b);`

### Exercise 11: ft_div_mod
- **Directory**: ex11/
- **Files**: ft_div_mod.c
- Store division and modulo results
- Prototype: `void ft_div_mod(int a, int b, int *div, int *mod);`

### Exercise 12: ft_iterative_factorial
- **Directory**: ex12/
- **Files**: ft_iterative_factorial.c
- Calculate factorial iteratively
- Prototype: `int ft_iterative_factorial(int nb);`

### Exercise 13: ft_recursive_factorial
- **Directory**: ex13/
- **Files**: ft_recursive_factorial.c
- Calculate factorial recursively
- Prototype: `int ft_recursive_factorial(int nb);`

### Exercise 14: ft_sqrt
- **Directory**: ex14/
- **Files**: ft_sqrt.c
- Calculate square root if rational
- Prototype: `int ft_sqrt(int nb);`

### Exercise 15: ft_putstr
- **Directory**: ex15/
- **Files**: ft_putstr.c
- Display string on standard output
- Prototype: `void ft_putstr(char *str);`

### Exercise 16: ft_strlen
- **Directory**: ex16/
- **Files**: ft_strlen.c
- Reproduce strlen function
- Prototype: `int ft_strlen(char *str);`

### Exercise 17: ft_strcmp
- **Directory**: ex17/
- **Files**: ft_strcmp.c
- Reproduce strcmp function
- Prototype: `int ft_strcmp(char *s1, char *s2);`

### Exercise 18: ft_print_params
- **Directory**: ex18/
- **Files**: ft_print_params.c
- Program to display command line arguments
- Must include main function

### Exercise 19: ft_sort_params
- **Directory**: ex19/
- **Files**: ft_sort_params.c
- Program to display arguments sorted by ASCII order
- Exclude argv[0]

### Exercise 20: ft_strdup
- **Directory**: ex20/
- **Files**: ft_strdup.c
- Reproduce strdup function
- Prototype: `char *ft_strdup(char *src);`

### Exercise 21: ft_range
- **Directory**: ex21/
- **Files**: ft_range.c
- Create array of ints between min and max
- Prototype: `int *ft_range(int min, int max);`

### Exercise 22: ft_abs.h
- **Directory**: ex22/
- **Files**: ft_abs.h
- Create ABS macro for absolute value

### Exercise 23: ft_point.h
- **Directory**: ex23/
- **Files**: ft_point.h
- Create header file for point structure

### Exercise 24: Makefile
- **Directory**: ex24/
- **Files**: Makefile
- Create Makefile for libft.a
- Include clean, fclean, re rules

### Exercise 25: ft_foreach
- **Directory**: ex25/
- **Files**: ft_foreach.c
- Apply function to array elements
- Prototype: `void ft_foreach(int *tab, int length, void(*f)(int));`

### Exercise 26: ft_count_if
- **Directory**: ex26/
- **Files**: ft_count_if.c
- Count elements returning 1
- Prototype: `int ft_count_if(char **tab, int(*f)(char*));`

### Exercise 27: display_file
- **Directory**: ex27/
- **Files**: Multiple files + Makefile
- Program to display file contents
- No malloc allowed, fixed-size array only

## Submission
- Submit work to Git repository
- Only Deepthoughts will evaluate
- 100% required to pass
- Don't forget author file
