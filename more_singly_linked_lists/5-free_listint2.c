#include "lists.h"
/**
 * free_listint2 - free newnode and set head to null
 * @head: pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode;

	while (*head != NULL)
	{
		newnode = *head;
		*head = (*head)->next;
		free(newnode);
	}
	free(*head);
	*head = NULL;
}
