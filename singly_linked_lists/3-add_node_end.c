#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - add a nod eat the end of the chain
 * @head: pointer to the head node
 * @str: string pointer for argument
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{

	/*creat new struct to add at the end*/
	/*and allocate memory for the struct data*/
	list_t *newnode = malloc(sizeof(list_t));
	list_t *last = *head;

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;


	return (newnode);
}
