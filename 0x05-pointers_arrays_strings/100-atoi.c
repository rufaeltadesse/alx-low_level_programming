#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - entery
 * @s: is avariable
 * Return:0
 */
int _atoi(char *s)
{
	int i;
	int j = strlen(s);
	int at;

	for (i = 0; i < j; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			s = s + i;
			break;
		}
	}
	at = atoi(s);

	return (at);
}
