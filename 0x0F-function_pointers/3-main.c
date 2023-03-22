#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - entry
 * @argc: is a variable
 * @argv: is an array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	char *mv;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	mv = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(mv) == NULL || mv[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*mv == '/' && n2 == 0) || (*mv == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(mv)(n1, n2));
	return (0);
}
