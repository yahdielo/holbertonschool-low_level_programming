#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @s: pointer to first char of string
 * Return: print string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar ('\n');
	}
}
