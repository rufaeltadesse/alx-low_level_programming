#include "main.h"
/**
 * swap_int - main funcion
 * @a: is a variable one
 * @b: is a variable two
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
