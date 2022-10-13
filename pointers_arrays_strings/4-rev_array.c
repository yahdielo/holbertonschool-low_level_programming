#include "main.h"
/**
 * _strlen - find lenght of a string.
 * @s: string to find the lenght.
 * Return: string in reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int z = 0;

	for (i = n - 1; i > z;)
	{
		temp = a[z];
		a[z] = a[i];
		a[i] = temp;

		z++;
		i++;
	}
}
