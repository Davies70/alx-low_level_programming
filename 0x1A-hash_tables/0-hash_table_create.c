#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the table
 * Return: pointer to the nearly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pointer;
	unsigned long int i;

	pointer = malloc(sizeof(hash_table_t));
	if (pointer == NULL)
		return (NULL);
	pointer->size = size;
	pointer->array = malloc(size * sizeof(hash_node_t *));
	if (pointer->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pointer->array[i] = NULL;
	return (pointer);
}
