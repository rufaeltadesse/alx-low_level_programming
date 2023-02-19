#include<stdio.h>
#include<stdlib.h>
/**
 * main - Program entry
 * Desc : writes a program which
 * displays list of numbers
 * Returns: 0
 */
int main(void)
{
	int aa;
	int bb = 0;

	while (bb < 10)
	{
		aa = 0;
		while (aa < 10)
		{
			if (bb != aa && bb < aa)
			{
				putchar('0' + bb);
				putchar('0' + aa);
				if (aa + bb != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			aa++;
		}
		bb++;
	}
	putchar('\n');
	return (0);
}
