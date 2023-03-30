#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - main entry
 * @h: is a variable
 * Return: sizelist
 */
size_t print_list(const list_t *h)
{
	const list_t *traverse = h;
	int counter = 0;
	while (traverse)
	{
	if (traverse->str == NULL)
		printf("[0] (nil)");
	else
	printf("[%d] %s",traverse->len, traverse->str);
	printf("\n");
	traverse = traverse->next;
	counter++;
	}
	return (counter);
}
