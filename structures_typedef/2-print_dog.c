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
	}
	if (d->name == NULL)
	{
		printf("nil");
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
