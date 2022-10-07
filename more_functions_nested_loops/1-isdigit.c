#include <stdio.h>
/**
 * _isdigit - check for c to adigit and return 1 if true else 0
 *@c: checks if c is a digit from 0 to 9
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	else
		return (0);
}
