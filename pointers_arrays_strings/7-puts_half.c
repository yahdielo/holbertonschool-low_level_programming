#include "main.h"
/**
 * puts_half - swap values of variables.
 * @str: value of string to divide.
 * Return: half a string
 */
void puts_half(char *str)
{
	int l, mid, n;

	/*fint lenght of str */
	for (l = 0; str[l] != '\0';)
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (mid = l / 2; str[mid] != '\0'; mid++)
		{
			_putchar(str[mid]);
		}
	}
	else
	{
		for (n = (l + 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
