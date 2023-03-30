#include "lists.h"
#include <stdlib.h>
/**
 * free_list - main entry
 * @head: head of ll
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *traverse = head;

	while (head)
	{
		traverse = head->next;
		free(head->str);
		free(head);
		head = traverse;
	}
}
