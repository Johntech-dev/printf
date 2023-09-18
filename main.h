#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*format_specifier(const char *))(va_list);

typedef struct format_specifier
{
	char *t;
	int (*f)(va_list);
} format_char;

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif
