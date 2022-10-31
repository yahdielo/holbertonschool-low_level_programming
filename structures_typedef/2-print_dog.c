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
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: nil\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
