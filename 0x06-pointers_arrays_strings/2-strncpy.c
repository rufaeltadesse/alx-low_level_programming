#include "main.h"
#include <string.h>
/**
 * _strncpy - entry
 * @dest: is a variable
 * @src: is a variable
 * @n: is a variable
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
