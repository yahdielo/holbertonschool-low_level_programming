#include "main.h"
#include <stdlib.h>
/**
 * array_range - store nd array of int min to mx
 * @min: min number
 * @max: max amount
 * Return: always 0
 *
 */
int *array_range(int min, int max)
{
	int i, len, *ptr;

	if (min > max)
	{
		return (NULL);
	}
	if (min == max)
	{
		len = 1;
	}
	else
	{
		len = max - min;
	}

	if (min == 0)
	{
		len++;
	}

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
