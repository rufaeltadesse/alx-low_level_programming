#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - main entry
 * @head: is head of the linked list
 * @str: is a string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;
	list_t *traverse = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	new->str = strdup(str);
	new->len = length;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = new;
	traverse = new;
	return (traverse);
}
