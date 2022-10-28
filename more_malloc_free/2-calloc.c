#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: amount of elementes
 * @size: data type
 * Return: the value of the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *ptr2;
	char *ptr1;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	if (size == sizeof(char))
	{
		ptr1 = malloc(nmemb * size);
		if (ptr1 == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			ptr1[i] = '0';
		}
		return (ptr1);
	}

	else
	{
		ptr2 = malloc(nmemb * size);
		if (ptr2 == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			ptr2[i] = 0;
		}

		return (ptr2);

	}

}
