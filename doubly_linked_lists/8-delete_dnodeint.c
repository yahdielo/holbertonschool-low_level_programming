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
	dlistint_t *temp = *head, *after;

	while (temp != NULL)
	{
		if (count != index)
		{
			temp = (*head)->next;
			if (count == index)
			{
				(*head) = temp->prev;
				after = temp->next;
				free(temp);
				break;
			}
			after = (*head)->next;
			after->prev = (*head);
		}
	}
	return (1);
}
