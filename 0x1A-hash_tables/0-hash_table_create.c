#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the table
 * Return: pointer to the nearly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pointer;

	pointer = calloc(size, sizeof(hash_table_t));
	return (pointer);
}
