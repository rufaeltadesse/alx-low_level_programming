#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - main entry
 * @h: is a variable
 * Return: sizelist
 */
size_t list_len(const list_t *h)
{
	const list_t *traverse = h;
	int counter = 0;

	while (traverse)
	{
	counter++;
	traverse = traverse->next;
	}
	return (counter);
}
