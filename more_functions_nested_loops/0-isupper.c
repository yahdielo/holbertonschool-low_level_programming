#include <stdio.h>
/**
 * _isupper - check for c to be a upper case char
 *@c: checks if c is upper
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
