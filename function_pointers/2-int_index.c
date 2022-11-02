#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function to compare index i in array
 * @array: elemetns to compare
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: -1 if is null
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	if (cmp != NULL)
	{
		int (*p)(int);

		p = cmp;

		for (i = 0; i < size; i++)
		{
			if ((*p)(array[i]) != '\0')
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);

}
