#include "main.h"
/**
 * _puts - function that prints a string
 * @str: pointer to a sting that should be printed
 * Return: The string save in pointer str
 */
void _puts(char *str)
{
	int  read;

	for (read = 0; str[read] != '\0'; read++)
	{
		_putchar(str[read]);
	}

	_putchar('\n');
}
