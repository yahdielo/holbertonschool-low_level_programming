#include "main.h"
/**
 * _pow_recursion - returns the factorial of a given number
 * @x: given number
 * @y: raise x to the power of y
 * Return: x to the power of why
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		return _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2);
	}
	else
	{
		return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
	return (0);
}
