
#include "main.h"
/**
 * _print_rev_recursion - print string using recursion
 * @s: pointer to first char of string
 * Return: print string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
