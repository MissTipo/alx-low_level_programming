#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: size of the array
 *
 * Return: NULL if an error occurs, otherwise the pointer
 *         to the hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
        ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
		free(ht);
	}

	for (; idx < size; idx++)
		ht->array[idx] = NULL;
	return (ht);
}
