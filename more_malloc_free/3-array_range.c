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

	len = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
