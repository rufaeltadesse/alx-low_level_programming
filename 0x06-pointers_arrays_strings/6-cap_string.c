#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - entry
 * @str: is a variable
 * Return: 0
 */
char *cap_string(char *str)
{
	int size = strlen(str);
	int i;

	for (i = 0; i < size; i++)
	{
	if (i < size - 1)
	{
		if (str[i] == ';' || str[i] == '\n' || str[i] == ' ' || str[i] == ',')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else if (str[i] == '.' || str[i] == '{' || str[i] == '}' || str[i] == '?')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		else if (str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '\t')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	}
return (str);
}
