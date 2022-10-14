#include "main.h"
/**
 * _memset - filled pointer with int n
 * @s: pointer to array
 * @b: value to be filled
 * @n: numbers of bytes to be filles
 * Return: function that filles memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
