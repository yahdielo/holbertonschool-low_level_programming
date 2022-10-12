#include "main.h"
/**
 * rev_string - find lenght of a string and reverse.
 * @s: string to find the lenght.
 * Return: the lenght of a string.
 */
void rev_string(char *s)
{
	int l;
	int reverse;
	int temp;
	int zero = 0;

	for (l = 0; s[l] != '\0';)
	{
		l++;
	}

	for (reverse = l - 1; reverse > zero;)
	{
		temp = s[zero];
		s[zero] = s[reverse];
		s[reverse] = temp;

		zero++;
		reverse--;
	}
}

