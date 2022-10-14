#include "main.h"
/**
 * _strncpy - copies the string pointed
 * @dest: destination
 * @src: source
 * @n: character lenght of array
 * Return: destination
 */
char *strch(char *s, char c)
{
	 int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			return ('\0');
		}
	}
	return (0);
}
