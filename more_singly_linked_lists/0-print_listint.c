#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - print all elemetns listint_t
 * @h: pointer to where arguments
 * Return: count - number of node
 */
size_t print_listint(const listint_t *h)
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
