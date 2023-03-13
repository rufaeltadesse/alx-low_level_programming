#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - entry
 * @width: is a variable
 * @height: is a variable
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc((height + 1) * sizeof(int *));
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}
		else
		{
		for (i = 0; i < height; i++)
			array[i] = malloc((width) * sizeof(int));
		return (array);
		}
	}


}
