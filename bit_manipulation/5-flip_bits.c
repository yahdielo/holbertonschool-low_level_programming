#include "main.h"
/**
 * flip_bits - function to count numbers of bits you need to flip a number
 * @n: pointer to integer from main
 * @m: pointer to another int
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
