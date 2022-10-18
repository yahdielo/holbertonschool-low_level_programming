#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: main string
 * @needle: substring
 * Return: the value of needle and haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[i])
				{
					break;
				}
			}

		if (needle[j] == '\0')
			{
				return (needle + i);
			}
		}
	}
	return (0);
}
