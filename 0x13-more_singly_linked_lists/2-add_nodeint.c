#include "lists.h"
/**
 * add_nodeint - main entry
 * @head: is pointer
 * @n: is an integer
 * Return: pinter to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	first->n = n;
	first->next = *head;
	*head = first;
	return (*head);
}
