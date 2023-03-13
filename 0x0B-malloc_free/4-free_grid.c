#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - entry
 * @grid: is a variable
 * @height: is a variable
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
