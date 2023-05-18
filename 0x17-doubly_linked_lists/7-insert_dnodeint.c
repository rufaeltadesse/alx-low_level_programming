#include "lists.h"
/**
 * insert_dnodeint_at_index - main entry
 * @h: head of the list
 * @idx: is index of the list
 * @n: is size of the list
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *nodeInsert;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	nodeInsert = malloc(sizeof(dlistint_t));
	if (nodeInsert == NULL)
		return (NULL);
	nodeInsert->n = n;
	nodeInsert->prev = temp;
	nodeInsert->next = temp->next;
	temp->next->prev = nodeInsert;
	temp->next = nodeInsert;
	return (nodeInsert);
}
