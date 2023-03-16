#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - entry
 * @b: is a variable
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
