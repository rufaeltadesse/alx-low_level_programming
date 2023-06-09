#include "hash_tables.h"

/**
 * hash_table_create - main function
 * @size: size of array.
 *
 * Return: has table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int count;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		hasht->array[count] = NULL;

	return (hasht);
}
