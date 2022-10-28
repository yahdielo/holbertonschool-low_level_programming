#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - function to concatnate string with malloc
 * @s1: first string
 * @s2: second string
 * @n: variable like size
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (n >= len2)	
	{
		n = len2;	
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		ptr[len1 + i] = s2[i];
	}

	ptr[len1] = '\0';
	return (ptr);
}
