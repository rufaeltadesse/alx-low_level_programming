#include "lists.h"
/**
 * print_listint - main entry
 * @h: is a variable
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%lu\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
