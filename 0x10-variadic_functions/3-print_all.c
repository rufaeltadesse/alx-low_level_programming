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
	va_list allList;
	char *stringList;
	unsigned int i = 0, j = 0, count = 0;
	const char args[] = "cifs";

	va_start(allList, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && count)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(allList, int)), count = 1;
				break;
			case 'i':
			printf("%d", va_arg(allList, int)), count = 1;
				break;
			case 'f':
			printf("%f", va_arg(allList, double)), count = 1;
					break;
			case 's':
			stringList = va_arg(allList, char *), count = 1;
				if (!stringList)
				{
					printf("(nil)");
					break;
				}
				printf("%s", stringList);
				break;
		} i++;
	}
	printf("\n");
}
