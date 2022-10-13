#include "main.h"
/**
 * string_toupper - print lower case to upper case
 * @s: given string
 * Return: all lower case to upper case
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);

}
