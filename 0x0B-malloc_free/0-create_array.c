#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - main entry
 * @size: is a variable
 * @c: is a variable
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr;

		arr = malloc(sizeof(c) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				arr[i] = c;

			return (arr);
		}
	}
}
