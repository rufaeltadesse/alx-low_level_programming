#include "search_algos.h"

/**
 * recursive_search - repeatitive search
 * @array: array var
 * @size: size
 * @value: search valu
 * Return: index
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t halfVal = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (halfVal && size % 2 == 0)
		halfVal--;

	if (value == array[halfVal])
		return ((int)halfVal);

	if (value < array[halfVal])
		return (recursive_search(array, halfVal, value));

	halfVal++;

	return (recursive_search(array + halfVal, size - halfVal, value) + halfVal);
}

/**
 * binary_search - binary search fun
 *
 * @array: array var
 * @size: size var
 * @value: value var
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int indexVal;

	indexVal = recursive_search(array, size, value);

	if (indexVal >= 0 && array[indexVal] != value)
		return (-1);

	return (indexVal);
}
