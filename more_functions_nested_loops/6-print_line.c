#include "main.h"
#include <stdio.h>
/**
 * print_line - print a line in terminal
 *@n: is the numer od times _ will be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			putchar('_');
			i++;
		}
	 putchar('\n');
	}
	else
	putchar('\n');
}
