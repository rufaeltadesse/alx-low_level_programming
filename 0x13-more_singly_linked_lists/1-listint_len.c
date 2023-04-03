#include "lists.h"
/**
 * listint_len - main entry
 * @h: is a pointer
 * Return: sizet value
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
