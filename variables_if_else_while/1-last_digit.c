#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int digit = n % 10;

	if ( digit > 5)
	{
	printf("the last digit of %d is %d and is  greater than 5\n",n , digit);
	}
	else if ( digit == 0)
	{
	printf("the last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6 || digit != 0);
	{
	printf("the last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
        return (0);
}	
