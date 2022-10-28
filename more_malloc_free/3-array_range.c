#include "main.h"
#include <stdlib.h>
/**
 *
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
		len = max - min + 1;
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
