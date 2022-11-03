#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list p;
	char *str = NULL;

	va_start(p, format);
	while (format && format[j])
		j++;
	while (format && format[i])
	{
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				break;
			case 'i':
				printf("%i", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
			str = va_arg(p, char *);
			if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (i != j - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(p);
}
