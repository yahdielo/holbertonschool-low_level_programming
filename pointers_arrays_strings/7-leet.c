#include "main.h"
/**
 * leet - is the fucntion to encode  a string into 1337
 * @s: string to manipulate
 * Return: the value of the string
 */
char *leet(char *s)
{
	int x, z;

	char let[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	char num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; z < 10; z++)
		{
			if (s[x] == let[z])
			{
				s[x] = num[z];
			}
		}
	}
	return (s);
}
