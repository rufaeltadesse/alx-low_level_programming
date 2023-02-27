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
	int ab = 1;

	for (i = 0; i < j; i++)
	{
		if ((*(s + i) >= 48 && *(s + i) <= 57))
		{
			s = s + i;
			break;
		}
		else if (*(s + i) == '-')
		{
			ab = -1;
		}
	}
	at = ab * atoi(s);

	return (at);
}
