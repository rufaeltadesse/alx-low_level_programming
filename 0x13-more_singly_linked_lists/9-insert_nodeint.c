#include "lists.h"
/**
 * insert_nodeint_at_index - main entry
 * @head: is a variable
 * @idx: index
 * @n: is a variable
 * Return: poinnter
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	listint_t *trav = *head;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	while (trav)
	{
		if (i == idx)
			break;
		trav = trav->next;
		i++;
	}
	if (trav == NULL || i < idx)
		return (NULL);
	temp = trav->next;
	node->n = n;
	trav->next = node;
	node->next = temp;
	return (node);
}
