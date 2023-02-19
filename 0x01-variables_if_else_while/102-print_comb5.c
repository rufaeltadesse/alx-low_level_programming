#include<stdio.h>
#include<stdlib.h>
/**
 * main - Program start
 * desc - displays list of numbers
 * Return: 0
 */
int main(void)
{
	int aa = 0;
	int bb1;
	int cc1;

	int aa2;
	int bb2;
	int cc2;

	while (aa <= 98)
	{
		bb1 = (aa / 10 + '0');
		cc1 = (aa % 10 + '0');
		aa2 = 0;
		while (aa2 <= 99)
		{
			bb2 = (aa2 / 10 + '0');
			cc2 = (aa2 % 10 + '0');

			if (aa < aa2)
			{
				putchar(bb1);
				putchar(cc1);
				putchar(' ');
				putchar(bb2);
				putchar(cc2);

				if(aa != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			aa2++;
		}
		aa++;
	}
	putchar('\n');
	return (0);
}
