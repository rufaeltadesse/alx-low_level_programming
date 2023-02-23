#include "main.h"
/**
 * more_numbers - Entry
 * Return: 0
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = 0;

		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			if (j == 10)
			{
				k = 0;
			}
			_putchar(k + '0');
			k++;
		}
		_putchar('\n');
	}
}
