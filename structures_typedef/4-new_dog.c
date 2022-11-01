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

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = malloc(sizeof(name) * strlen(name));

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(owner) * strlen(owner));

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	else
	{
		strcpy(newdog->name, name);
		newdog->age = age;
		strcpy(newdog->owner, owner);
	}
	return (newdog);
}
