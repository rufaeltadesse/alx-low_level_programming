#include "main.h"
/**
 * print_square - Entry
 * @size: is a variable
 * Return: 0
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
