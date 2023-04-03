#include "lists.h"
/**
 * pop_listint - main entryy
 * @head: is a variable
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value = (*head)->n;

	*head = temp->next;
	free(temp);
	return (value);

}
