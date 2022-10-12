#include "main.h"
/**
 * puts2 - print every other char of the string
 * @str: pointer to print every other char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]  != '\0' ;)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
