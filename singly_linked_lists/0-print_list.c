#include "list.h"
#include <stdio.h>
/**
 *
 *
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
		printf("%s \n", h->str);
		}
		count++;
		h = h->next;
	}
	/* return number of nodes*/
	return (count);
}
