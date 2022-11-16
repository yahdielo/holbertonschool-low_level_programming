#include "main.h"
/**
 * binary_t_uint - convert binary number to unsigned int
 * @b: is pointing to a string of binary numbers 0 and 1
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	/* if b is not pointing to anything return 0*/
	/*also if b is pointing to one or more char that are not 0 and 1*/
	if (b == NULL)
	{
		return (0);
	}

	/*if b index i stands in a 0 or a 1*/
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}

	return (val);
}
