#include "hash_tables.h"
/**
 * key_index - get index of key
 * @key: key
 * @size: size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_key;

	hash_key = hash_djb2(key);

	index = hash_key % size;

	return (index);
}
