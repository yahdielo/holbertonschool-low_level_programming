#include "main.h"
/**
 * _strncpy - copies the string pointed
 * @dest: destination
 * @src: source
 * @n: character lenght of array
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
