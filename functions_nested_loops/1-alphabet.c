#include "main.h"
/**
 * print_alphabet - Print _putchar
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ii;

	for (ii = 'a'; ii <= 'z'; ii++)
	{
		_putchar(ii);
	}

	_putchar('\n');
}
