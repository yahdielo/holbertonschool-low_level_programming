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
	dlistint_t *newnode = head;

	if (index == 0)
	{
		return (newnode);
	}	

	while (head != NULL)
	{
		count++;
		newnode = newnode->next;

		if (index == count)
		{
			return (newnode);
		}
	}

	if (index > count)
	{
		return (NULL);
	}

	return (newnode);
}
