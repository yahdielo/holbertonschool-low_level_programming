#include <stdio.h>
#include "main.h"
/**
 * _strlen - find lenght of a string.
 * @s: string to find the lenght.
 *
 * print_rev - print string in reverse
 * @s: string to reverse
 * Return: string in reverse
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0';)
		counter++;

	return (counter);
}

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

