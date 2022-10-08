#include "main.h"
#include <stdio.h>
/**
 * print_line - print a line in terminal
 *@n: is the numer od times _ will be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');

}
