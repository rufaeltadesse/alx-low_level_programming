#include "main.h"
/**
 * print_triangle - Entry
 * @size: is a variable
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = size - 1; k > i; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
