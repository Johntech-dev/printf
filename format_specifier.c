#include "main.h"


/**
 * format_specifier - Select the appropriate format specifier function.
 * @format: The format specifier character.
 *
 * Return: A function pointer to the appropriate format specifier function.
 */
int (*format_specifier(const char *format))(va_list)
{
	int i;

	format_char format_array[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_int},
		{NULL, NULL}
	};

	for (i = 0; format_array[i].t != NULL; i++)
	{
		if (*(format_array[i].t) == *format)
		{
			return (format_array[i].f);
		}
	}
	return (NULL);
}
