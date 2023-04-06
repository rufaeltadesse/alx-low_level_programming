#include "main.h"
/**
 * flip_bits - main entry
 * @n: isa variable
 * @m: isa variable
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b;
	unsigned long int c;

	b = n ^ m;
	c = 0;
	while (b > 0)
	{
		c = c + (b & 1);
		b = b >> 1;
	}
	return (c);
}
