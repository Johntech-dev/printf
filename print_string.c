#include "main.h"
/**
 * _strlen - Calculate the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string (excluding the null terminator).
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}


/**
 * print_string - Print a string.
 * @args: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed, or
 * 0 if the string is NULL or empty.
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;

	if (str)
	{
		count = write(1, str, _strlen(str));
		return (count);
	}
	return (0);
}
