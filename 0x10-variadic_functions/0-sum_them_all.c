#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - entry
 * @n: is a variable
 * Return: value
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumList;
	unsigned int i;
	int sumTotal = 0;
	if (n <= 0)
		return (0);

	va_start(sumList, n);
	for (i = 0; i < n; i++)
	{	sumTotal = sumTotal + va_arg(sumList, int);
	/*printf("%d sumTOtal\n", sumTotal);*/
	}
	/*va_end(sumList);*/
	return (sumTotal);
}
