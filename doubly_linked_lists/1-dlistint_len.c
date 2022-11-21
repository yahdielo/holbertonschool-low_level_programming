#include "lists.h"
/**
 * dlistint_t - return numbers of elements in list
 * Return: count of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
