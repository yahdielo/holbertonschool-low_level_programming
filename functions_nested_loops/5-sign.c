#include "main.h"
/**
 *print_sign - cheks value of the number and prints its sign
 *@n: checks for value og variable and prints its sign
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	char b = '+';
	char zero = '0';
	char na = '-';

	if (n >= '1')
	{
		_putchar(b);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(zero);
		return (0);
	}

	else
	{
		_putchar(na);
		return (-1);
	}
}
