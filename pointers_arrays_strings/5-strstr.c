#include "main.h"
/**
 * _strstr - find first ocurrence of substring
 * @haystack: string to examine
 * @needle: find wat byte is equal to haystack
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
					return (haystack);
				}

		}
	}
	return (0);
}
