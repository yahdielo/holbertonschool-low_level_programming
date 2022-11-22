#include "lists.h"
/**
 * free_dlistint - free node list
 * @head: pointer to node in list
 * Return: free new node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = newnode->next;
		free(newnode);
	}
}
