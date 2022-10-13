#include "main.h"
/**
 * *_strncat - concatnate 2 arrays together
 * @dest: first array
 * @src: second array.
 * @n: numbers of char in the array
 * Return: addition of the values of 2 arrays.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
