#include "hash_tables.h"

/**
 * hash_table_set - main entry
 * @ht: pointer
 * @key: variable
 * @value: value variable
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	char *valueC;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valueC = strdup(value);
	if (valueC == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueC;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valueC);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = valueC;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
