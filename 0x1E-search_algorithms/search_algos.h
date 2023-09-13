#ifndef _SORTING_H_
#define _SORTING_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - struct list
 *
 * @n: Integer
 * @index: index var
 * @next: pointer of next node
 *
 * Description: description
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - linked list
 *
 * @n: Integer
 * @index: index
 * @next: next node pointer
 * @express: pointer lane
 *
 * Description: description text
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);

#endif
