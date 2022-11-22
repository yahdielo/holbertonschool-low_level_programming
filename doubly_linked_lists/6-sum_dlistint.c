#include "lists.h"
/**
 * sum_dlistint - sum all the elemetns inside list of nodes
 * @head: pointer to head node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
