#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Return: Always 0 ()Success*/

/* main - return if var n is positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0) {
	printf( "n is negative\n");
	}

        else if(n > 0) {
	printf("n is positive\n");
	}

	else {
	printf("n is zero\n");
	}	

	return (0);
}
