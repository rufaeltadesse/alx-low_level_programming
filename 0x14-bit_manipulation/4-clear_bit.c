#include "main.h"
/**
 * clear_bit - main entry
 * @n: isa variable
 * @index: isa variable
 * Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return (1);
}
