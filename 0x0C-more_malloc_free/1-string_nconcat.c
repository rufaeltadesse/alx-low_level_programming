#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - entry
 * @s1: is a variable
 * @s2: is a variable
 * @n: is a variable
 * Return: variable
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *constr;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lens1] != '\0')
		lens1++;
	while (s2 && s2[lens2] != '\0')
		lens2++;

	if (n > lens2)
	{
		n = lens2;
	}
	constr = malloc(sizeof(char) * (lens1 + n + 1));

	if (!constr)
		return (NULL);
	for (i = 0; i < lens1; i++)
	{
		constr[i] = s1[i];
	}
	for (; i < (lens1 + n); i++)
	{
		constr[i] = s2[i - lens1];
	}
	constr[i] = '\0';
	return (constr);
}

