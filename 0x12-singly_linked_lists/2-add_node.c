#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - main entry
 * @head: is head of the linked list
 * @str: is a string
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (*head);
}
