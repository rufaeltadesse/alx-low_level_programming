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

	int count = 0;

	for (i = 0; i < j; i++)
	{
		if ((*(s + i) >= 48 && *(s + i) <= 57))
		{
			s = s + i;
			break;
		}
		else if (*s == '-' && i == 0 && j > 0 && (*(s + 1) >= 48 && *(s + 1) <= 57))
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
	return (-1 * atoi(s));
	else
	return (atoi(s));
}
