#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: pointer tp hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *delete_node;

	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			free(ht->array[i]);
		}
		else
		{
			node = ht->array[i];
			delete_node = ht->array[i];

			while (node != NULL)
			{
				delete_node = node;
				free(delete_node->key);
				free(delete_node->value);
				free(delete_node);
				node = node->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
