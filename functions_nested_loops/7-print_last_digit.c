#include "main.h"
/**
 *print_last_digit - print las digit
 *@d: returns las digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int d)
{

	d = d % 10;

	if (d < 0)
	{
	d = (-1) * d;
	}

	_putchar('0' + d);
	return (d);
}
