#include "main.h"
#include <stdlib.h>
/**
 * create_array - creat array with value allocation of specific data type
 * @size: size of array
 * @c: value to allocate inside array
 * Return: a pointer to the array. 
 *
 */
char *create_array(unsigned int size, char c)
{
	/*creat a array of char wth a specific char*/
	/* creat a pointer to array and separate memory of a specific data type*/
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	/* if size is 0 return null*/
	if (size == 0)
	{
		return (NULL);
	}

	/* return null if address to pointer is null*/
	if (*p == '\0')
	{
		return (NULL);
	}

	/*run inside the array with i & subtitud with value c*/
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	/*returns the address of the first value in pointer p*/
	return (p);
}
