#include "main.h"

/**
 * print_int - Print an integer as a sequence of characters.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
	int num, i = 0;
	int count = 0;
	char c[1];
	int arr[10];

	num = va_arg(args, int);


	while (num != 0)
	{
		arr[i] = (num % 10);
		num = num / 10;
		if (num == 0)
			break;
		i++;
	}

	for (i; i >= 0; i--)
	{
		c[0] = ('0' + arr[i]);
		count  += write(1, c, 1);
	}
	return (count);
}
