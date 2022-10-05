#include "main.h"
/**
 * print alphabet_10x - print alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int times = 10, i;
	char al;

	/*loop conditions */
	for (i = 0; i <= times; i++)
	{
		/*print amercian alphabet */
		for (al = 'a'; al <= 'z'; al++)
		{
		_putchar(al);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
