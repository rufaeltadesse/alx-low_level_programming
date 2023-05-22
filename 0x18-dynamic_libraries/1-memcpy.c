#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - entry
 * @dest: is a variable
 * @src: is a variable
 * @n: is a variable
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
