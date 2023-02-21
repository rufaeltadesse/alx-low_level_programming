#include <ctype.h>
#include "main.h"
/**
 * _islower - is lower
 * c: is a character
 * Return: 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
