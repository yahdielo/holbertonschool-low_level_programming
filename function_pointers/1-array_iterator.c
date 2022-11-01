#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function to call function pointer and iterate on array
 * @size: size of the array
 * @action: functions to use for printing
 * @array: string to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned int long i;

	if (action != NULL)
	{
		void (*p)(int);

		p = action;

		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				(*p)(array[i]);
			}
		}
	}
}
