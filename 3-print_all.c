#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - main entry
 * @format: is a variable
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j = 0, c = 0;
	char *stringList;
	const char args[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(valist, int)); c = 1;
				break;
			case 'i':
			printf("%d", va_arg(valist, int)); c = 1;
				break;
			case 'f':
			printf("%f", va_arg(valist, double)); c = 1;
					break;
			case 's':
			stringList = va_arg(valist, char *); c = 1;
				if (!stringList)
				printf("(nil)");
				else
				printf("%s", stringList);
					break;
		} i++;
	}
	printf("\n");
}
