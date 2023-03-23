#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - main entry
 * @separator: is a variable
 * @n: is a variable
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sumList;
	unsigned int i;
	int sumTotal = 0;

	va_start(sumList, n);
	for (i = 0; i < n; i++)
	{
		sumTotal = va_arg(sumList, int);
		if (i < n - 1 && separator != NULL)
			printf("%d%s", sumTotal, separator);
		else
			printf("%d", sumTotal);
	}
	printf("\n");
	va_end(sumList);
}
