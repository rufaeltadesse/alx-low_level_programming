#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - entry
 * @str: is a variable
 * Return: character
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *strcopy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		strcopy = malloc(size);
		if (strcopy == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				strcopy[i] = str[i];
			return (strcopy);
		}
	}
}
