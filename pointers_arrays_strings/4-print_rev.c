#include "main.h"
/**
 * _strlen - find lenght of a string.
 * @s: string to find the lenght.
 * Return: string in reverse
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0';)
		counter++;

	return (counter);
}
/**
 * print_rev - print string in reverse
 * @s: reverse to be reverse
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int reverse;
	int len;

	len =  _strlen(s);

	for (reverse = len - 1; reverse >= 0 ; reverse--)
	{
		putchar(s[reverse]);
	}

	putchar('\n');
}

