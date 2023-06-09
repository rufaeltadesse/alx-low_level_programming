#include "hash_tables.h"

/**
 * hash_table_delete - main entry
 * @ht: variable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *headNode = ht;
	hash_node_t *newNode, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			newNode = ht->array[i];
			while (newNode != NULL)
			{
				tmp = newNode->next;
				free(newNode->key);
				free(newNode->value);
				free(newNode);
				newNode = tmp;
			}
		}
	}
	free(headNode->array);
	free(headNode);
}
