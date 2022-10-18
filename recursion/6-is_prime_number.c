#include "main.h"
/**
 * is_prime_number - function to identifie prime numbers
 * @n: numbers to identify if thdy are prime
 * Return: return 1 if is prime and 0 if is not
 *
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 1)
	{
		return (0);
	}

	if (n == 0)
	{
		return (0);
	}	

	/*cheking if number is prime*/
	if (n == i)
	{
		return (0);
	}

	/* base case*/
	if (n % i == 0)
	{
		return (0);
	}
	else 
	{
	i++;
	return is_prime_number(n);
	}
}
