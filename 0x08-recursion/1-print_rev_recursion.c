#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - entery
 * @s: is a variable
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int size = strlen(s);

	if (size > 0)
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}
