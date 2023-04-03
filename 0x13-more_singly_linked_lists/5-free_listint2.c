#include "lists.h"
/**
 * free_listint2 - main entry
 * @head: is a head pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse = *head;
	listint_t *trav = *head;

	while (trav)
	{
		traverse = trav->next;
		free(trav);
		trav = traverse;
	}
	*head = NULL;
}
