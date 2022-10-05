#include "main.h"
/**
 * print_alphabet_10x - print alphabet 10 times in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int times = 9, i;
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
}
