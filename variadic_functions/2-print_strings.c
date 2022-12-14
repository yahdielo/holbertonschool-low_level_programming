#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string
 * @separator: value to be printed between strings
 * @n: numbers of string pass to function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list p;

	if (n != 0)
	{

		/* initialising argument n as value to list p*/
		va_start(p, n);

		/*interate in string*/
		for (i = 0; i < n; i++)
		{
			/* retrive argument data*/
			j = va_arg(p, char *);

			if (j == NULL)
			{
				printf("(nil)");
			}
			else
			{
			/*print argiments*/
			printf("%s", j);
			}

			/* if separator in null do nothing*/

			if (i < n - 1)
			{
				if (separator != NULL)
				{
				printf("%s", separator);
				}
			}
		}

	}
	va_end(p);
	printf("\n");
}
