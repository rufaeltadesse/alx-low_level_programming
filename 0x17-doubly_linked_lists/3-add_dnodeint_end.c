#include "lists.h"
/**
 * add_dnodeint_end - main entry
 * @head: is head of the list
 * @n: is size of the list
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *nodeLast;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	nodeLast = *head;
	while (nodeLast->next != NULL)
		nodeLast = nodeLast->next;
	nodeLast->next = temp;
	temp->prev = nodeLast;
	return (temp);
}
