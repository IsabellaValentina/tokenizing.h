#ifndef _FUNDAMENTALS_H //checks whether HEADERFILE_H is not declared.

#define _FUNDAMENTALS_H //will declare HEADERFILE_H once #ifndef generates true.



#include <stdio.h> // The header file for standard input and output. This is useful for getting the input from the user(Keyboard) and output result text to the monitor(screen)

#include <stdlib.h> // includes functions involving memory allocation, process control, conversions and others

#include <string.h> // contains macro definitions, constants and declarations of functions and types used not only for string handling but also various memory handling functions

#define TRUE 1// the fact that: 0 ≡ false and any value ≠ 0 ≡ true

void fundamentals(); // , is the data type for the result of a function that returns normally, but does not provide a result value to its caller. Void is not the same as zero, void is not a number and cannot be in calculations



#endif // is to know the scope of #ifndef i.e end of #ifndef