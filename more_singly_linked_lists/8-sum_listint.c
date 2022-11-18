#include "lists.h"
/**
 * sum_listint - sum all the nodes data
 * @head: pointer to head node
 * Return: the addintion of all the data
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	listint_t *current_node = head;

	while (head == NULL)
	{
		return (0);
	}

	while (current_node != NULL)
	{
		add = add + current_node->n;
		current_node = current_node->next;
	}

	return (add);


}
