#include "main.h"
/**
 * get_bit - return the value of int in a given index
 * @n: input from main file
 * @index: is the index starting from 0
 * Return: the value of a bit at index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus, i;

	if (index[i] == NULL)
	{
		return (-1);
	}

	bitstatus = (n >> index) & 1;

	return (bitstatus);
}
