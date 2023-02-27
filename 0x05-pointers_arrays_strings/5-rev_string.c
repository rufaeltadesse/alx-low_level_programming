#include "main.h"
#include "string.h"
/**
 * rev_string - main etnry
 * @s: is avariable
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int j = strlen(s) - 1;
	char swap;

	for (i = 0; i < j; i++)
	{
		if (i >= j)
			break;
		swap = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = swap;
		j--;
	}
}
