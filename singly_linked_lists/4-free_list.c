#include "lists.h"
#include <stdlib.h>
/**
 *
 */
void free_list(list_t *head)
{
	list_t *newnode;

	while (head == NULL)
	{
		newnode = head;
		head = newnode->next;
		free(newnode->str);
		free(newnode);
	}
}
