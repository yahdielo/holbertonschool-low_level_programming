#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: destination
 * @src: source
 * Return: destination
 */
int _strcmp(char *s1, char *s2)
{

	if (*s1 == *s2)
	{
		/** if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++; */
		return (0);
	}
	return (*s1 - *s2);
}
