#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*format_specifier(const char *))(va_list);

/**
 * struct format_specifier - Define a format specifier for
 * custom printf function.
 * @t: The format specifier character (e.g., "d" for %d).
 * @f: A function pointer to the corresponding printing function.
 *
 * Description: This struct defines a format specifier character
 * (e.g., "d" for %d) and associates it with a function pointer.
 * The function pointer points to a printing function responsible
 * for handling the format specifier and printing the
 * corresponding argument.
 */

typedef struct format_specifier
{
	char *t;
	int (*f)(va_list);
} format_char;

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_int(va_list);


#endif
