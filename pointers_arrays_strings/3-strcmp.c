#include "main.h"
/**
 * _strcmp - copies the string pointed
 * @s1: first tring
 * @s2: second string
 * Return: cpm strings
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++; 
	}
	return (*s1 - *s2);
}
