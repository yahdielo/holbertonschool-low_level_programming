#include "main.h"
#include <stdio.h>
/**
 * print_square - print a square
 *@size: var that indicates the size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, v;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (v = 0; v < size; v++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
