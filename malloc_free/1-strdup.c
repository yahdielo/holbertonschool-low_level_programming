#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - fucntion to return the copy of str
 * @str: string to manipulate
 * Return: a pointer to the copy  array.
 */
char *_strdup(char *str)
{
	unsigned int i, j, size = strlen(str);
	char *copy = malloc(sizeof(char) * size);

	/* if str is null return null*/
	if (str == NULL)
	{
		return (NULL);
	}
	/* variable runs inside array of chars str*/
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = 0; j < size; j++)
	{
		copy[j] = str[j];
	}

	while (copy == NULL)
	{
		return (NULL);
	}

	/*if ((copy = _strdup(str) + 1) != NULL)
	{i
		return (copy);
	}*/
	return (copy);
}
