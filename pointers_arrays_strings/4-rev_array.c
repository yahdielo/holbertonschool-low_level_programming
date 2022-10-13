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

	for (i = 0; i < n /2;)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
