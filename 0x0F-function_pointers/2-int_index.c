#include "function_pointers.h"
/**
 * int_index - main entry
 * @array: is a variable
 * @size: is a variable size
 * @cmp: is a fucntion pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) > 0)
			return (i);
	}
	return (-1);

}
