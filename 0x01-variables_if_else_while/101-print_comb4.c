#include<stdio.h>
#include<stdlib.h>
/**
 * main - program entry
 * Desc - displays list of numbers
 * Return: 0
 */
int main(void)
{
	int aa;
	int bb;
	int cc = 0;

	while (cc < 10)
	{
		bb = 0;
		while (bb < 10)
		{
			aa = 0;
			while (aa < 10)
			{
				if (aa != bb && bb != cc && cc < bb && bb < aa)
				{
					putchar('0' + cc);
					putchar('0' + bb);
					putchar('0' + aa);
					if (aa + bb + cc != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				aa++;
			}
			bb++;
		}
		cc++;
	}
	putchar('\n');
	return (0);
}
