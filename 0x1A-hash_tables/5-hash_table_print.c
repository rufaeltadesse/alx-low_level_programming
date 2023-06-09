#include "hash_tables.h"

/**
 * hash_table_print - main entry
 * @ht: pointer
 * Return: Void:
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *newNode;
	unsigned long int i;
	unsigned char myflag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (myflag == 1)
				printf(", ");

			newNode = ht->array[i];
			while (newNode != NULL)
			{
				printf("'%s': '%s'", newNode->key, newNode->value);
				newNode = newNode->next;
				if (newNode != NULL)
					printf(", ");
			}
			myflag = 1;
		}
	}
	printf("}\n");
}
