#include "main.h"
/**
 * _strspn - find character with in a string
 * @s: pointer to s bytes
 * @accept: bytes to compare with s
 * Return: return number bytes found in 8s same as in accept
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (0);
}
