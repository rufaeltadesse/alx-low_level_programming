#include "lists.h"
/**
 * get_dnodeint_at_index - main entry
 * @head: head of the list
 * @index: index pint
 * Return: list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
