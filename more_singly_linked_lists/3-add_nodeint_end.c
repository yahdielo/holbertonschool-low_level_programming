#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the list
 * @head: pointer to the head of the list
 * @n: arguments of the struct
 * Return: pointer to new allocated node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	listint_t *last = *head;

	newnode->n = n;
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
