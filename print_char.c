#include "main.h"

/**
 * print_char - Print a character.
 * @args: A va_list containing the character to be printed.
 *
 * Return: The number of characters printed (1 if successful, 0 otherwise).
 */
int print_char(va_list args)
{
	char c = (char) va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
