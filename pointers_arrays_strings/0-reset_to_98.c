#include "main.h"
#include <stdio.h>
void reset_to_98(int *n)
{
	int p = 98;
	
	n = &p;

	putchar(p);

	*n = 402;

	putchar(p);
}
