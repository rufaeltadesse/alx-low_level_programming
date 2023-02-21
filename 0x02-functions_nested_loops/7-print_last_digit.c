#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print digit
 * @n: is avariable
 * Return: 0
 */
int print_last_digit(int n)
{
	int ab = abs(n % 10) + 48 ;
	_putchar(ab);
	return (abs(n % 10));
}
