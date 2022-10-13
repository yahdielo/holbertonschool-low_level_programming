#include "main.h"
/**
 * reverse_array - reverse the elements of the array
 * @a: name of the array
 * @n: numbers of characters in th array
 * Return: reverse values of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2;)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
