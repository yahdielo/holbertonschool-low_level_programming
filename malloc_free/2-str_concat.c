#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function to get copy string.
 * @str: string to get the copy with amlloc.
 * Return: a pointer to copy string in memory.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1 = strlen(s1), size2 = strlen(s2);
	int maxsize = size1 + size2;
	char *concat = malloc(sizeof(char) * maxsize);

	/* if one of the string is null return null*/
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	if (concat == NULL)
	{
		return (NULL);
	}

	/* initialize i to incremetn inside s1 array*/
	for (i = 0; *s1 != '\0';)
	{
		concat[i] = *s1;
		s1++;
		i++;
	}
	for (; *s2 != '\0';)
	{
		concat[i] = *s2;
		s2++;
		i++;
	}
	return (concat);
}
