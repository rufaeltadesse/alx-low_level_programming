#include "main.h"
/**
 * print_number - Entry
 * @n: is a variable
 * Return: 0
 */
void print_number(int n)
{
int score, div, i;

score = n;

if (n < 0)
{
	score = score * -1;
	_putchar('-');
}
for (div = 1; div <= score; div *= 10)
;
do {
	div /= 10;
if (div != 0)
{
i = score / div;
_putchar(i + '0');
score %= div;
}
else
{
_putchar('0');
score = 0;
}
} while (score);

}
