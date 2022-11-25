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
	dlistint_t *temp = *head, *after, *before;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		if (count != index)
		{
			count++;
			temp = (*head)->next;
			if (count == index)
			{
				after = temp->next;
				before = temp->prev;
				before->next = after;
                        	after->prev = before;
				free(temp);
				break;
			}
			/*after = temp->next;
			before = temp->prev;
			before->next = after;
			after->prev = before;*/
		}
	}
	return (1);
}
