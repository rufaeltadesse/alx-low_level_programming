#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - main entry
 * @separator: is a variable
 * @n: is a variable
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sumList;
	unsigned int i;
	char *stringsList;

	va_start(sumList, n);

	for (i = 0; i < n; i++)
	{
		stringsList = va_arg(sumList, char *);
		if (stringsList != NULL)
		{
			if (i < n - 1 && separator != NULL)
				printf("%s%s", stringsList, separator);
			else
				printf("%s", stringsList);
		}
		else
		{
			printf("(nil)\n");
			return;
		}
	}
	printf("\n");
	va_end(sumList);
}
