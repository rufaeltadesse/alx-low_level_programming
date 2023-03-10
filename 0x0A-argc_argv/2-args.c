#include <stdio.h>
/**
 * main - entry
 * @argc: is a variable
 * @argv: is a variable
 * Return: 0
 */
int main (int argc, char *argv[])
{
int c;

if (argc > 1)
{
	for (c = 1; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
}

return (0);
}
