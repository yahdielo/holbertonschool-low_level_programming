#include "lists.h"
#include <stdio.h>
/**
 * print_list - fucntion to  print a list of elements
 * @h: is the pointer to the strings in the list elements
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);

		if (h->str == NULL)
		{
			printf("(nil) \n");
		}
		else
		{
		printf("%s\n ", h->str);
		}
		count++;
		h = h->next;
	}
	/* return number of nodes*/
	return (count);
}
