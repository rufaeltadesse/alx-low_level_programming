#include "lists.h"
/**
 * sum_dlistint - main entry
 * @head: is head of the list
 * Return: count
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
