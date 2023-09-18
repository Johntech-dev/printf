#include "main.h"

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
