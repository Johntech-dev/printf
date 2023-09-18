#include "main.h"

int print_string(va_list args)
{
	char *c = (char*) va_arg(args, int);
	int count = 0, i;
	if (c)
	{
		count = write(1, args, 1);
		return (count);
		i++;
	}
	return (0);
}
