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
	unsigned int at = 0;
	int count = 0;

	for (i = 0; i < j; i++)
	{
		if ((*(s + i) >= 48 && *(s + i) <= 57))
		{
			s = s + i;
			break;
		}
		else if (*(s + i) == '-')
		{
			count++;
		}
	}
	if (count > 0 && count % 2 != 0)
	at =  -1 * atoi(s);
	else
	at = atoi(s);

	return (at);
}
