#include "main.h"
/**
 *
 *
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
