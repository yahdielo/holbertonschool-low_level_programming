#include "lists.h"
/**
 * dlistint_len - return numbers of elements in list
 * @h: pointer to  node element
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
