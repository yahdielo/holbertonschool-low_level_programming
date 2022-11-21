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
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	while (head == NULL)
	{
		return (NULL);
	}
	while (newnode == NULL)
	{
		return (NULL);
	}
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	return (newnode);
}
