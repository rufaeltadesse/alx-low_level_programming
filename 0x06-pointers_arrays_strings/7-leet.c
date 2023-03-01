#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - entry
 * @c: is avriable
 * Return: 0
 */
char *leet(char *c)
{
	int size = strlen(c);
	int i;

	for (i = 0; i < size; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
			c[i] = '4';
		else if (c[i] == 'e' || c[i] == 'E')
			c[i] = '3';
		else if (c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		else if (c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		else if (c[i] == 'l' || c[i] == 'L')
			c[i] = '1';
	}
	return (c);
}
