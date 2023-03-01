#include "main.h"
#include <string.h>
/**
 * _strncat
 * @dest: is a variable
 * @src: is a variable
 * @n: is a variable
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
