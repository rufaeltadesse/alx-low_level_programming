#include "main.h"
/**
 * reverse_array - entry
 * @a: is a variable
 * @n: is a variable
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int swap;

	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		}
		j--;
	}
}
