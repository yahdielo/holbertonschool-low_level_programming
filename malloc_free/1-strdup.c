#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function to get copy string.
 * @str: string to get the copy with amlloc.
 * Return: a pointer to copy string in memory.
 *
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
	return (copy);
}
