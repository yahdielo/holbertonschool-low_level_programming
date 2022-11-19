#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a given position
 * @n: data inside the node
 * @idx: index of nodes new node needs to be allocated
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int index = idx;
	/* initialize struct*/
	/* and allocate the newnode in memory*/
	listint_t *newnode = malloc(sizeof(listint_t));

	/*check if pointed node is null*/
	if (head == NULL)
	{
	return (NULL);
	}

	newnode->n = n;
	newnode->next = index;

	return (newnode);
}
