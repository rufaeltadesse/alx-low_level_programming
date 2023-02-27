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
	int j;

	if (size % 2 == 0)
		i = size / 2;
	else
	{
		i = (size - 1) / 2;
	}
	size--;
	for (j = i - 1; j >= 0; j--)
		_putchar(*(str + size - j));
	_putchar('\n');
}
