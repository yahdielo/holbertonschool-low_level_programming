#include "main.h"
/**
 * factorial - print factorial numbers
 * @n:  var to rpint the factorial numbers
 * Return: print factorial numbers
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
