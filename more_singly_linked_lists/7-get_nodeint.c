#include "lists.h"
/**
 * get_nodeint_at_index - function to return the nth node of a list
 * @head: pointer to head node
 * @index: index of nodes starting at 0
 * Return: current node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *current_node = head;

	while (current_node == NULL)
	{
		return (NULL);
	}

	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);
		}
		count++;
		current_node = current_node->next;
	}

	return (current_node);
}
