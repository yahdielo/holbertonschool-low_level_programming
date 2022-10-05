#include "main.h"
/**
 *_abs - cheks and compute the absolute value of a num
 *@x: computes the absolute value of a number
 * Return: Always 0 (Success)
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = (-1) * x;
	}

	return (x);
}
