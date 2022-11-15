#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free struct
 * @head: pointer to head node
 * Return: free struct
 */
void free_list(list_t *head)
{
	list_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = newnode->next;
		free(newnode->str);
		free(newnode);
	}
}
