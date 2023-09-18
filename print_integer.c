#include "main.h"

/**
 * print_integer - Print an integer as a sequence of characters.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char c[1];
	int arr[10];
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	if (num == 0)
	{
		c[0] = '0';
		count += write(1, c, 1);
	}
	else
	{
		int i = 0;

		while (num != 0)
		{
			arr[i] = (num % 10);
			num = num / 10;
			i++;
		}
		if (is_negative)
		{
			c[0] = '-';
			count += write(1, c, 1);
		}
		for (i--; i >= 0; i--)
		{
			c[0] = ('0' + arr[i]);
			count += write(1, c, 1);
		}
	}
	return (count);
}
