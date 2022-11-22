#include "lists.h"
/**
 * add_dnodeint_end - add new node a tthe end
 * @head: pointer to struct
 * @n: struct data
 * Return: newnode
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	newnode->n = n;
	newnode->next = NULL;

	/*if head is null*/
	/*set node prev to null & head to new node*/
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	newnode->prev = last;
	last->next = newnode;

	return (newnode);
}
