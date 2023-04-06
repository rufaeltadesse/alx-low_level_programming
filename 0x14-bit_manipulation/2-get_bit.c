#include "main.h"
/**
 * get_bit - entry
 * @n: is a variable
 * @index: isa variable
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
