#include "main.h"
/**
 * _strlen_recursion - print string using recursion
 * @s: pointer to first char of string
 * Return: print string
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return( 1 + _strlen_recursion(s + 1));
	}
	return (0);
}
