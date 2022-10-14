#include "main.h"
/**
 * _memcpy - copie content of array from one side to ther
 * @dest: cpy chars to
 * @src: char to be cpy from
 * @n: number of characters to be copied
 * Return: content of src in to dest
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
