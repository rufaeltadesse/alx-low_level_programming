#include "lists.h"
/**
 * print_listint - main entry
 * @h: is a variable
 * Return: size t
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%u\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
