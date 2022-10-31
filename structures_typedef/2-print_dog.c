#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include "1-init_dog.c"
/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 * Return: always 0
 *
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
