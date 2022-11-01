#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - duplicate of dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
dog_t *new_dog(char *name,float age, char *owner)
{
	dog_t *newdog;

	char *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = malloc(sizeof(name) * strlen(name));

	if (newdog->name == NULL)
	{
		free(name);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(owner) * strlen(owner));

	if (newdog->owner == NULL)
	{
		free(name);
		free(owner);
		return (NULL);
	}
	else
	{
		strcopy(newdog->name);
		strcopy(mewdog->owner);
	}
	return (newdog);
}
