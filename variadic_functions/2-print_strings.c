#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, j;
	va_list p;

	if (n != NULL)
	{
		/* initialising argument n as value to list p*/
		va_start(p, n);

		/*interate in string*/
		for (i = 0; i < n: i++)
		{
			/* retrive argument data*/
			j = va_arg(p, n);

			/*print argiments*/
			printf("%s", j);

			/* if separator in null do nothing*/
			if (separator == NULL)
			{}

			 else if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("nil");
		}

	}
	va_end(p);
	printf("\n");
}
