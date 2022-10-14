#include "main.h"
/**
 * _strspn - find character with in a string
 * @s: pointer to s bytes
 * @accept: bytes to compare with s
 * Return: return number bytes found in 8s same as in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count);
}
