#include "main.h"
/**
 * *_strcat - concatnate 2 arrays together
 * @dest: first array
 * @src: second array.
 * Return: addition of the values of 2 arrays.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (j = 0; src[j] != '\0';)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
