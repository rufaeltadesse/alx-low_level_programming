#include "main.h"
#include "stdlib.h"
/**
 * array_range - entry
 * @min: is a variable
 * @max: is a variable
 * Return: range
 */
int *array_range(int min, int max)
{
	int *list;
	int minValue;
	int i;

	if (min > max)
		return (0);
	minValue = min;
	list = malloc(sizeof(int) * (max - min + 1));
	if (list == NULL)
		return (0);
	for (i = 0; i <= max - min; i++)
	{
		list[i] = minValue;
		minValue++;
	}
	return (list);

}
