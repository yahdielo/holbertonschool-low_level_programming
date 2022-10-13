#include "main.h"
/**
 * cap_string - capitalizes word of the string
 * @str: string to manipulate
 * Return: return the value of str
 */
char *cap_string(char *str)
{
	int x, j;

	char comp[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0 ; str[x] != '\0'; x++)
	{
		if (x == 0 && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[x] == comp[j])
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				{
					str[x + 1] -= 32;
				}
			}
		}
	}
		return (str);
}
