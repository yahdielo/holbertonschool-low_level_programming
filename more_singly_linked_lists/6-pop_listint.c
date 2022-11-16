#include "lists.h"
/**
 *
 *
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *temp;

	while (*head == NULL)
	{
		return (0);
	}
	
	/* store head pointer in temp*/
	/* then in struct temp store n data inside variable*/
	/* the store next in head pointer*/
	temp = *head;
	head_data = temp->n;
	*head = (*head)->next;
	return (head_data);
}
