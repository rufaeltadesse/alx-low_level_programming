#include<ctype.h>
/**
 * _isdigit - Entry
 * @c: is avariable
 * Return: 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
