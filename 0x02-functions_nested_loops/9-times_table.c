#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * void times_table -voiid table
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int mult;
	int lastDigit,firstDigit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			if(mult>9)
			{
			lastDigit = mult % 10;
			firstDigit=mult;
			while (firstDigit >= 10)
			{
				firstDigit = firstDigit / 10;
			}
			if ( j != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			_putchar(firstDigit + '0');
			_putchar(lastDigit + '0');
			}
			else
			{
			if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar(mult + '0');
			}
			
		}
		_putchar('\n');
	}
}
