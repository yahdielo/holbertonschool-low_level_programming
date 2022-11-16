#include "main.h"
/**
 * set_bit - funtion to set a bit in a given index
 * @n: is the pointer to a int inside the index
 * @index: given index to manipulate bit
 * Return: -1 if error and 1 if successful run
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
	 (*n |= 1 << index);
	}
	return (1);
}
