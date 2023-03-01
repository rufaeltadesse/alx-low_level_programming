#include "main.h"
#include <string.h>
/**
 * string_toupper - entery
 * @str: is a variable
 * Return: 0
 */
char *string_toupper(char *str)
{
	int size = strlen(str);
	int i;

	for (i = 0; i < size; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
