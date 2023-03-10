#include <stdio.h>
/**
 * main - entry
 * @argc: is an argument
 * @argv: is a vector
 * Return: 0
 */
int main (int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
