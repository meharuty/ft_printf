*This project has been created as part of the 42 curriculum by meharuty.*

# ft_printf

## Description

ft_printf is a reimplementation of the standard C function printf from the C Standard Library.  
The goal of this project is to understand variadic functions, formatted output, and low-level memory handling in C by recreating the behavior of printf.

The function ft_printf reproduces the behavior of the original printf for a defined set of conversions and flags. It parses a format string, processes format specifiers, retrieves arguments using variadic functions, and prints formatted output to the standard output.

### Supported Conversions

%c — Character  
%s — String  
%p — Pointer address  
%d — Decimal (base 10)  
%i — Integer (base 10)  
%u — Unsigned decimal  
%x — Hexadecimal (lowercase)  
%X — Hexadecimal (uppercase)  
%% — Percent sign  



## Instructions

### Compilation

To compile the library:

make

This will generate the static library:

libftprintf.a

To clean object files:

make clean

To remove all generated files:

make fclean

To recompile everything:

make re



How to Use

Include the header file in your C source:

#include "ft_printf.h"

Compile your program together with the library:

cc main.c libftprintf.a



Resources

Official Documentation

	man 3 printf

	man 3 write

	man 3 stdarg

	ISO C Standard documentation (C99 / C11)

Learning References

	Variadic functions in C (stdarg.h tutorials)

	Number-to-string conversion algorithms

	Base conversion techniques (decimal and hexadecimal)

	Recursive and iterative printing methods



AI Usage

AI tools were used strictly as a learning and documentation assistant.

Specifically, AI was used for:

	Clarifying edge cases in printf behavior

	Reviewing formatting rules for specific conversions

	Improving documentation wording and structure

	Verifying algorithm explanations

AI was not used to generate or directly implement the core logic of the project.
All parsing, conversion handling, and implementation details were written manually.
