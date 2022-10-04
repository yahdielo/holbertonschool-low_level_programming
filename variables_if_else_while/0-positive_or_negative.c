#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* main - print if n is positive or negative */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n<0){
	printf("%d is negative\n", n);
	}
	
	else if(n>0){
	printf("%d is positive", n);
	}
	
	else {
	printf("%d is 0", n);
	}
	
	return (0);

}
