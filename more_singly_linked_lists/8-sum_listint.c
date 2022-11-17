#include "lists.h"
/**
 *
 *
 */
int sum(listint_t *head)
{
	int add = 0;

	listint_t *current_node = head;

	while (head == NULL)
	{
		return (0);
	}

	if (current_node != NULL)
	{
		current_node = current_node->next;
		sum += current_node->n;
	}

	return (add);


}
