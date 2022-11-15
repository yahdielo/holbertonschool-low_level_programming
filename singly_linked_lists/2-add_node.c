#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - fujnction to add a new node as a head
 * @head: pointer to head node
 * @str: pointer to string values inside the struct
 * Return: newhead
 */
list_t *add_node(list_t **head, const char *str)
{
	/* pointer to str duplicate*/
	char *doble = strdup(str);

	/*new struct declare*/
	list_t *newhead = malloc(sizeof(list_t));

	/*separate new memory for newhead node*/
	doble = malloc(sizeof(strdup(str)));

	while (newhead == NULL || doble == NULL)
	{
		free(newhead);
		return (NULL);
	}

	/*store new value at specific variable in the newstruct*/
	newhead->str = doble;
	newhead->len = strlen(doble);
	newhead->next = *head;

	*head = newhead;

	return (newhead);
}
