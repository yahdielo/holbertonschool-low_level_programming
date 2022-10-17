#include "main.h"
/**
 * find_root - returns the factorial of a given number
 * @n: given number
 * @root: root of var n
 * Return: the root
 */
int find_root(int root, int n);

int find_root(int root, int n)
{
	int perfect_square = root * root;

	if (perfect_square < n)
	{
		return (find_root(root + 1, n));
	}
	else if (perfect_square > n)
	{
		return (-1);
	}
	return (root);
}
/**
 * _sqrt_recursion - returns the factorial of a given number
 * @n: given number
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (find_root(0, n));
}
