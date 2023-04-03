#ifndef FUNCTIONS
#define FUNCTIONS
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct listint - main entry
 * @n: is a size
 * @next: is a pointer
 */
typedef struct listintt
{
	size_t n;
	struct listintt *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif
