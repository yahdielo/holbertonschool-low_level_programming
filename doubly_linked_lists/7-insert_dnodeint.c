#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at t given index
 * @idx: index where node need to be located
 * @n: node data
 * Return: return newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *after = *h, *before = *h;
	unsigned int count = 0;

	newnode->n = n;

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*h == NULL)
	{
		return (NULL);
	}

	if (idx > count)
	{
		return (NULL);
	}
	
	while (after != NULL)
	{
		count++;
		after = after->next;
		if ( idx == count)
		{
			before = after->prev;
			newnode->next = after;
			newnode->prev = after->prev;
			break;
		}
	}
	before->next = newnode;
	after->prev = newnode;

	return (newnode);
}
