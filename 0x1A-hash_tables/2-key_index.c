#include "hash_tables.h"

/**
 * key_index - gets the index of the keys
 * @key: keys of the table
 * @size: size of the array
 * Return: the index at which the key is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
