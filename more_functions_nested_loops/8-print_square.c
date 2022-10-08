#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
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
