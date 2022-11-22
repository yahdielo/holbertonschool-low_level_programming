#include "lists.h"
/**
 * get_dnodeint_at_index -get the nth node of a list
 * @index: index of nodes starting from 0
 * @head: pointer to head node
 * Return: newnode
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0)
	{
		return (head);
	}

	while (head != NULL)
	{
		count++;
		head = head->next;

		if (index == count)
		{
			break;
		}
	}

	if (index > count)
	{
		return (NULL);
	}

	return (head);
}
