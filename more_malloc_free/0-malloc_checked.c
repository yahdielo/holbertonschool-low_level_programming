#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - functions to separate space
 * @b: value to safe the space for using malloc
 * Returnd: address to the index 0 of the array
 */
void *malloc_checked(unsigned int b)
{
	/* safes space in memory for b int */
	char *p = malloc(sizeof(char) * b);

	/* check for malloc to not be null*/
	if (p == NULL)
	{
		exit (98);	
	}
	return (p);
}
