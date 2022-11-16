#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free struct
 * @head: pointer to head node
 * Return: free struct
 */
void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = newnode->next;
		free(newnode->str);
		free(newnode);
	}
}
