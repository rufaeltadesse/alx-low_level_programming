#include "main.h"
#include <string.h>
/**
 * binary_to_uint - main entry
 * @b: is a variable
 * Return: nothing
 */
unsigned int binary_to_uint(const char *b)
{
	int validate = 0;
	int i = 0;
	unsigned int value = 1;
	unsigned int sum = 0;
	int len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			validate = 1;
			break;
		}
		if (b[i] == '1')
		{
			sum = sum + value;
		}
		value = value * 2;
	}
	if (validate || b == NULL)
		return (0);
	return (sum);
}
