#include "search_algos.h"
/**
 * binary_search - search for value in array of integers, binary way
 * @array: array of integers to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t  mid, left = 0, right = size, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;

		else
			left = mid + 1;
	}
	return (-1);
}
