#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry
 * @argc: is a variable
 * @argv: is a variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
int c;
int add = 0;

if (argc > 1)
{
	for (c = 1; c < argc; c++)
	{
		if (atoi(argv[c]) == 0 && strcmp(argv[c], "0") != 0)
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[c]);
	}
	printf("%d\n", add);
}
else
{
	printf("0\n");
}

return (0);
}
