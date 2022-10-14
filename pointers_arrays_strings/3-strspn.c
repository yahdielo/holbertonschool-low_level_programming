#include "main.h"
/**
 * _strchr - find character with in a string
 * @s: pointer to string store in array
 * @c: value in string to display
 * Return: display specific velue in the string
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
