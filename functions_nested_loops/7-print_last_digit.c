#include "main.h"
/**
 *print_last_digit - print las digit
 *@d: returns las digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int d)
{

	d = d % 10;
	
	_putchar('0' + d);

	return (d);
	_putchar('\n');
}
