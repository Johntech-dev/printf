#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0, value = 0;
	va_list args;
	int (*f)(va_list);
	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = format_specifier(&format[i +1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i +1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i + 2;
				continue;
			}
		}
	}

	return (count);
}
