#include "lists.h"
#include <stdio.h>
/**
 * list_len - get the number elements inside the list
 * @h: pointer to elements inside the list
 * Return: maxlen wish is the number of elements inside the list
 *
 */
size_t list_len(const list_t *h)
{
	int maxlen = 0;

	while (h != NULL)
	{
		maxlen++;
		h = h->next;
	}
	return (maxlen);
}
