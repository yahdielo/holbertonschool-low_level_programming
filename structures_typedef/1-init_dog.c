#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize struct variables
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: pointer struct
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{}
	else
	{
	d->name = name;
	d->owner = owner;
	d->age = age;
	}
}
