#include "lists.h"
/**
 * get_nodeint_at_index - main entry
 * @head: is a variable
 * @index: is a variable
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	node->next = head->next;
	node->n = head->n;
	return (node);
}
