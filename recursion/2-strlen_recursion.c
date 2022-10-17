#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @s: pointer to first char of string
 * Return: print string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + count);
		return count;
	}
	return (0);
}
