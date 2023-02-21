#include <ctype.h>
#include "main.h"
/**
 * int _islower - is lower
 *
 * Return: 1
 */
int _islower(int c)
{
	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
