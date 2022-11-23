#include "hash_tables.h"
/*
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->size = size;

	table->array = malloc(sizeof(hash_node_t*) * table->size);

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
