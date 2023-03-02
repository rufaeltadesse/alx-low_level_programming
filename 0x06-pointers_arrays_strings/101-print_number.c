#include "main.h"
#include <stdlib.h>
/**
 * print_number - entry
 * @n: is a number
 * Return: 0
 */
void print_number(int n)
{
int div;
int ab = n;
if (n < 0)
	n = abs(n);
for (div = 1; div <= n; div *= 10)
;
if (ab < 0)
	_putchar('-');
do {
div /= 10;
if (div == 0)
{
	_putchar('0');
	n = 0;
}
else
{
_putchar((n / div) +'0');
n %= div;
}
} while (n);
}
