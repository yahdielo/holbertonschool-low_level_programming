#include "hash_tables.h"
/**
 * hash_table_get - get value of node in a specific index
 * @ht: pinter to hash table
 * @key: that access the value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;

	hash_node_t *node;

	/*to find get a specific value*/
	/* first find out the index in where the value is stored*/
	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	 /*find index*/
	 index = key_index((const unsigned char *)key, ht->size);

	 /*pointer to a specific place inside the array*/
	 node = ht->array[index];

	 /*compare if the key given to me is the same as the one stored in node*/
	 /*if is not the same then move to the next node and compare*/
	 /*if it is then return the value stored in node*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		else
		{
			node = node->next;
		}
	}
	return (NULL);
}
