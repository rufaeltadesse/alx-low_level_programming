#include "hash_tables.h"

/**
 * hash_table_get - main entry
 * @ht: variable.
 * @key: key value
 * Return: character
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *newNode;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	newNode = ht->array[idx];
	while (newNode && strcmp(newNode->key, key) != 0)
		newNode = newNode->next;

	return ((newNode == NULL) ? NULL : newNode->value);
}
