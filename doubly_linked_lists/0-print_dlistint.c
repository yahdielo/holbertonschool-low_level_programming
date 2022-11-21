#include "lists.h"
/**
 * print_dlistint - print all elements of a list
 * @h: pinter to head element of a list
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
