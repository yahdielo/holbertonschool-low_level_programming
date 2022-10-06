#include "main.h"
/**
 *print_last_digit - print las digit
 *@r: returns las digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	r = r % 10;

	_putchar('0' + r);

	return (r);
	_putchar('\n');
}
