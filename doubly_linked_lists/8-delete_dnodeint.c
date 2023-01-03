#include "lists.h"
/**
 * delete_dnodeint_at_index - delet node at given index
 * @head: pointer to head node
 * @index: place to delet node
 * Return: 1 of success or -1 if not
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head, *after = *head, *before = *head;

	if ((*head) == NULL)
	{
		return (-1);
	}

	if (index == count)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		after = (*head)->next;
		free(temp);
	}
	while (count != index)
	{
		count++;
		temp = temp->next;
		if (count == index)
		{
			temp->prev = before;
			temp->next = after;
			free(temp);
			break;
			return (1);
		}
	}
	return (1);
}
