#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	/*to print hash table i need a loop to iterate inside*/
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		if (node != NULL)
		{
			if (i < (ht->size - 1))
			{
				printf(", ");
			}
			printf("'%s' : '%s'", node->key, node->value);
		}
	}
	printf("}");
}
