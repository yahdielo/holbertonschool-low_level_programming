#include <stdio.h>
#include "main.h"
/**
 * print_array - find lenght of a string and reverse.
 * @a: pointer of array.
 * @n: number of lenght of the array.
 * Return: every element of the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	putchar('\n');
}
