#include "function_pointers.h"
/**
 * print_name - main entry
 * @name: is a variable
 * @f: is a function parameter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL)
		(*f)(name);
}
