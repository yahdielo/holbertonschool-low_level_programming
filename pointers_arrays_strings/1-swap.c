#include <stdio.h>
/**
 * swap_int - swap values of variables.
 * @a: value of a swap to b.
 * @b: value of b swap to a.
 * Return: The result of the addition.
 */
void swap_int(int *a, int *b)
{
		int temp;

		temp = *a;

		*a = *b;

		*b = temp;
}
