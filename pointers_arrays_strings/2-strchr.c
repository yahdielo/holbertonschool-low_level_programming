#include "main.h"
/**
 * _strchr - find character with in a string
 * @s: pointer to string store in array
 * @c: value in string to display
 * Return: display specific velue in the string
 */
char *_strchr(char *s, char c)
{
	 unsigned int i;

	for (i = 0; *s != '\0';)
	{
		if (*s == c)
			return (s + i);
		s++;
		if (*s == c)
			return (s + i);
	}
	return (0);
}
