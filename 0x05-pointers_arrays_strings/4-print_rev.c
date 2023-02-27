#include "main.h"
#include <string.h>
/**
 * print_rev - referse entry
 * @s: is avariable
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int j = strlen(s);

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
