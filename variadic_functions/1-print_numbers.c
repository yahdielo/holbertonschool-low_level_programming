#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print number in var n
 * @separator: comma and spasce between numbers
 * @n: numbers of integers in the array
 * Return: pointer list p
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list p;


	if (n != 0)
	{
		/*initializing argument to pointer list*/
		va_start(p, n);

		/* interate values of list*/
		for (i = 0; i < n; i++)
		{
			/*retrive argumet data*/
			j = va_arg(p, int);

			printf("%d", j);

			if (separator == NULL)
			{
				printf("%d", j);
			}

			else if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(p);
	printf("\n");
}
