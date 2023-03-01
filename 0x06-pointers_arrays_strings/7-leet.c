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
	int j;

	char s[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == s[j])
				c[i] = b[j];
		}
	}
	return (c);
}
