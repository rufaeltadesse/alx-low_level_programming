#include "lists.h"
/**
 * add_nodeint_end - main entry
 * @head: isa variable
 * @n: isa variable
 * Return: pointer to end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp = *head;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	while (temp != NULL && temp->next)
	{
		temp = temp->next;
	}
	if (temp != NULL)
	temp->next = end;
	else
	{
	*head = end;
	return (*head);
	}
	return (end);
}
