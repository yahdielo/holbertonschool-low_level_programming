#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;

	if  (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i <= size; i++)
	{
		putchar('#');
	}
	putchar('\n');
	
}
