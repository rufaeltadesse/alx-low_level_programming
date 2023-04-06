#include "main.h"
/**
 * set_bit - main entry
 * @n: isa varaible
 * @index: value
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n ^ (1 << index);
	return (1);
}
