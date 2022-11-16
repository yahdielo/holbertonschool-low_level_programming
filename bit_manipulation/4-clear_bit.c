#include "main.h"
/**
 * clear_bit - set value bit to 0 at the certain index
 * @n: pointer to number
 * @index: index of number
 * Return: always 1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
	}
	return (1);
}
