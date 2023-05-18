#include "lists.h"
/**
 * print_dlistint - main entry
 * @h: head of the list
 * Return: sizet
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
