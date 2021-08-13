#ifndef _CONVERTING_H /*directive allows for conditional compilation. The preprocessor determines if the provided macro does not exist before including the subsequent code in the compilation process.*/

#define _CONVERTING_H /*defining variable globally.*/

#include <stdio.h> /*The header file stdio. h stands for Standard Input Output. It has the information related to input/output functions.*/

#include <string.h>/*including the header in the C standard library for the C programming language which contains macro definitions, constants and declarations of functions and types used not only for string handling but also various memory handling functions*/

#include <stdlib.h>/*is the header of the general purpose standard library of C programming language which includes functions involving memory allocation, process control, conversions and others.*/

#define TRUE 1/*Defining TRUE in that manner is a staple of old sources, presumably in an attempt to follow the style guide that calls for avoiding "magical constants" whenever possible.*/

void converting();/*defining a function with 0 argument and void type.*/

#endif/*the #endif directive closes off the following directive: #ifndef. When the #endif directive is encountered, preprocessing of the opening directive (#if, #ifdef, or #ifndef) is completed.*/