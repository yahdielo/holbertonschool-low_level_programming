#include "lists.h"
/**
 * pop_listint - delet node and return inst data
 * @head: pointer to head node
 * Return: value of head data ones freed
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

	free(temp);
	return (head_data);
}
