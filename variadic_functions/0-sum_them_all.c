#include <stdarg.h>
/**
 * sum_them_all - sum all the integers of the list
 * @n: number of integers
 * Return: the sum of all the numbers in list
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	 unsigned int i, sum = 0;
	 va_list p;

	if (n != 0)
	{
		/* initializing argument to pointer list*/
		va_start(p, n);

		/*iterate in the values of list*/
		for (i = 0; i < n; i++)
		{
		/*retive arguments of list*/
		sum += va_arg(p, int);
		}
	}
	else
	{
		return (0);
	}
	va_end(p);
	return (sum);
}
