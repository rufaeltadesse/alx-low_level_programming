#include "lists.h"
/**
 * dlistint_len - main entry
 * @h: head of the list
 * Return: sizet
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
