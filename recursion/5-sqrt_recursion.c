#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: factorial given number
 */
int find_square_root(int root, int n);

int find_square_root(int root, int n)
{
	int perfect_square = root * root;

	if (perfect_square < n)
	{
		return (find_square_root (root + 1, n));
	}
	else if (perfect_square > n)
	{
		return(-1);
	}
	return(root);
}

int _sqrt_recursion(int n)
{
	return (find_square_root (0, n));
}
