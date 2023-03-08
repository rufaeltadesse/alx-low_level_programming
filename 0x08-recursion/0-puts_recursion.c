#include "main.h"
#include <string.h>

/**
 * _puts_recursion - entry
 * @s: is a variable
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int size = strlen(s);

	if (size > 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
