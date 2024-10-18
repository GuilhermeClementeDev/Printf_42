ft_printf - 42 School Project
Overview

This repository contains my implementation of ft_printf, a core project at 42 School. 
The goal of this project is to recreate the behavior of the C printf function, 
implementing formatted output handling. This project was an excellent opportunity to 
deepen my understanding of variadic functions, string formatting, and low-level 
output control.
______________________________________________________________________________________

What I Learned

Variadic Functions:

Gained experience working with variadic arguments using stdarg.h to handle a variable
number of parameters, a crucial part of ft_printf functionality.

Formatting and Conversion:

Implemented various format specifiers like %c, %s, %d, %i, %u, %x, %X, and %%.
This included writing conversion routines for integers, characters, and 
hexadecimal values.
______________________________________________________________________________________

Files Overview

    ft_printf.h: Header file containing function prototypes.
    ft_printf.c: Source code for the ft_printf function and its main logic.
    ft_printf_char.c: Source for char print.
    ft_printf_hex.c: Source for hexadecimal print.
    ft_printf_number.c: Source for numer print.
    ft_printf_pointer.c: Source for pointer print.
    ft_printf_string.c: Source for string print.
    ft_printf_unsigned_num.c: Source for unsigned num print.
    libft: library of previous work.
    Makefile: Makefile to compile the library and manage the build process.
______________________________________________________________________________________

This will generate the libftprintf.a static library. You can then link it with your 
project and use ft_printf as a drop-in replacement for the standard printf.
______________________________________________________________________________________

Contact

Feel free to reach out if you have any questions or suggestions:

    Email: guilhermeclementedealmeida@gmail.com
    LinkedIn: Guilherme Clemente de Almeida
