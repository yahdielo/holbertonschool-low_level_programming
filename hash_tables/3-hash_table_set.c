#include "hash_tables.h"
/**
 * hash_table_set - set a new node to in the hash tabl
 * @key: key
 * @value: is the value associated with the key
 * @ht: pointer to hash table
 * Return: 1 if sucess or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;

	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == 0)
	{
		return (0);
	}

	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	/* find index*/
	index = key_index((const unsigned char *) key, ht->size);

	/*place node at index*/

	ht->array[index] = node;

	return (1);
}
