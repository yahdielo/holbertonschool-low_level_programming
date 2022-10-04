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
	
	printf("last digit of %d is %d\n", n, digit);
        return (0);
}	
