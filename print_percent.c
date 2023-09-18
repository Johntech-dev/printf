#include "main.h"

/**
 * print_percent - Print a percentage symbol.
 * @args: A va_list containing any potential arguments
 * (unused in this function).
 *
 * Return: The number of characters printed (1 for the percentage symbol).
 */
int print_percent(va_list args)
{
	int count = 0;

	char c = '%';

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
