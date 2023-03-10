#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: is a variable
 * @argv: is a variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
int c;
int mul = 1;
if (argc > 2)
{
	for (c = 1; c < argc; c++)
	{
		mul = mul * atoi(argv[c]);
	}
	printf("%d\n", mul);
}
else
{
	printf("Error\n");
	return (1);
}

return (0);
}
