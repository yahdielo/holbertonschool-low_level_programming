#include "main.h"
/**
 * _strpbrk - gets bytes share by s & accept
 * @s: pointer ti string s
 * @accept: pointer to tring 2
 * Return: bytes share by accepts and s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
