#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list ptr;
	va_start(ptr, format);

	while (format && format[j])
	{
		j++;
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					get_string(va_arg(ptr, char*));
					break;
				case 'c':
					_putchar(va_arg(ptr, int));
					break;
				default:
					i++;
					continue;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(ptr);
	return (i);
}

