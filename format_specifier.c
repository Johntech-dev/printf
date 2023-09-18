#include <stdarg.h>
#include "main.h"

int (*format_specifier(const char *format))(va_list)
{
	int i;

	format_char format_array[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (i = 0; format_array[i].t != NULL; i++)
	{
		if (*(format_array[i].t) == *format)
		{
			return format_array[i].f;
		}
	}
	return (NULL);
}
