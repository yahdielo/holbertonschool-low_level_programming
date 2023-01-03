#include "search_algos.h"
/**
 * linear_search - searches for a value in array
 * @array: pointer to array values
 * @size: size of the array
 * @value: value at sprecific array index
 * Returns: always 0
 */
int linear_search(int *array, size_t size, int value)
{
	int i, index = 0,  Size = size;

	if (!array || !value)
	{
		return (-1);
	}

	for (i = 0; i < Size; i++)
	{
		index++;
		printf("Value checked array[%d] = [%d]\n", index - 1, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
