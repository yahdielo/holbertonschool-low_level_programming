#include "lists.h"
/**
 * add_nodeint - add a node at the head of the list
 * @head: pointer to head of the list
 * @n: arguments of the list
 * Return: pointer to new added head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	while (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
