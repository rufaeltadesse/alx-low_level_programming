#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - main entry
 * @array: is a list
 * @size: is the size of array
 * @action: is a pointer
 * Return: value from the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
