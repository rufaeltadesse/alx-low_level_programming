#include "main.h"
#include <ctype.h>
/**
 * _isalpha - desc
 * @c: is a variable
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

