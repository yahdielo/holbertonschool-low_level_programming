#include "main.h"
/**
 * _islower - check and print if c is lower
 *@c: check and print for c to be lower
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
