#include "main.h"
#include <stdlib.h>
/**
 * _calloc - main entry
 * @nmemb: is a variable
 * @size: is a variable
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (size == 0 || nmemb == 0)
	return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < size * nmemb; i++)
	ptr[i] = 0;
return (ptr);
}
