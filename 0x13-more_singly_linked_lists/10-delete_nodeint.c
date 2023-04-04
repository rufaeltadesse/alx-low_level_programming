#include "lists.h"
/**
 * delete_nodeint_at_index - main entry
 * @head: is a variable
 * @index: index
 * Return: poinnter
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;
	listint_t *prev = *head;
	listint_t *trav = *head;
	unsigned int i = 0;

	while (trav)
	{
		if (i == index)
		{
			next = trav->next;
			break;
		}
		prev = trav;
		trav = trav->next;
		i++;
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(trav);
		return (1);
	}
	else
	{
		prev->next = next;
		free(trav);
		return (1);
	}
	return (-1);
}
