#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (action != NULL)
	{
		void (*p) (int);
		p = action;

		for (i = 0; i < size; i++)
		{
			(*p)(array[i]);
		}
	}
	if (array == NULL)
	{
	}
}
