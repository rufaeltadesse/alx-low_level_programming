#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - main entry
 * @s1: is a variable
 * @s2: is a variable
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size1;
	int size2;
	char *merged;

	size1 = strlen(s1);
	size2 = strlen(s2);
	merged = malloc(size1 + size2 + 1);
	if (merged == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
			merged[i] = s1[i];
		for (j = 0; j < size2; j++)
			merged[i + j] = s2[j];
		return (merged);
	}
}
