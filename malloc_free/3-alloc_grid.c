
#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - to return a pointer to a two dimensional array
  * @width: parameter to rows
  * @height: parameter to find columns
  *
  * Return: pointer
  */
int **alloc_grid(int width, int height)
{
	int i, j, q, z;
	int **doble;

	if (width <= 0 || height <= 0)
		return (NULL);

	doble = malloc(sizeof(int *) * height);

	if (doble == NULL)
	{
		free(doble);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		doble[i] = malloc(sizeof(int) * width);

		if (doble[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(doble[j]);
			}

			free(doble);
			return (NULL);
		}
	}

	for (q = 0; q < height; q++)
	{
		for (z = 0; z < width; z++)
		{
			doble[q][z] = 0;
		}
	}

	return (doble);
}
