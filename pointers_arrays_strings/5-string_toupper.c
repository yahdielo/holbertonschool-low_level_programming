#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: given string
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
