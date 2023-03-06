#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry
 * @a: is a variable
 * @size: is a variable
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;
	int size1 = size * size;

	j = 0;
	for (i = 0; i < size1; i = i + size + 1)
	{
		sum1 = sum1 + *(a + i);
	}
	i = size;
	for (j = size1 - size; j > 0; j = j - size + 1)
	{
		sum2 = sum2 + *(a + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
