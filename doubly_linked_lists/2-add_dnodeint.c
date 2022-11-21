#include "lists.h"
/**
 * add_dnodeint - add new node at head
 * @head: pointer to node
 * @n: node data
 * Return: pointer to newndoe
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}

	*head = newnode;
	
	return (newnode);
}
