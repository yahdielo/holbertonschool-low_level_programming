#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print a diagonal lines
 *@n: functions multiplys 2 ints
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if(n <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
	putchar('\');

	}
	putchar('\n');
}
