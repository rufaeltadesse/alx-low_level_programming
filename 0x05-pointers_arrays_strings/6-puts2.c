#include "main.h"
#include <string.h>
/**
 * puts2 - main entry
 * @str: is avarible
 * Return: 0
 */
void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i < j; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
