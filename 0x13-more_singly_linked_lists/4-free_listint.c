#include "lists.h"
/**
 * free_listint - main entry
 * @head: is a head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *traverse = head;

	while (head)
	{
		traverse = head->next;
		free(head);
		head = traverse;
	}
}
