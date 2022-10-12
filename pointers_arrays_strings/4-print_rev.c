#include <stdio.h>
#include "main.h"
/**
 * _strlen - find lenght of a string.
 * @s: string to find the lenght.
 * Return: the lenght of a string.
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



	for (reverse = len; s[reverse] >= 0 ; reverse--)
	{
		putchar(s[reverse]);
	}

	putchar('\n');
}

