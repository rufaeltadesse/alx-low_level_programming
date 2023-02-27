#include "main.h"
#include <string.h>
/**
 * puts_half - main entry
 * @str: is a variable
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int size = strlen(str);

	if (size % 2 == 0)
		i = size / 2;
	else
	{
		i = size / 2;
		i = i + 2;
	}
	for ( ; i < size; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
