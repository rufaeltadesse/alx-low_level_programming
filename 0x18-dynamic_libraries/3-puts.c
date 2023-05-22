#include "main.h"
#include <string.h>
/**
 * _puts - main entry
 * @str: is a variable
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	int j = strlen(str);

	for (i = 0; i < j; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
