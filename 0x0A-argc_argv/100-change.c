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
int coins = 0;
int values = 0;
int i;
int n[5] = {25, 10, 5, 2, 1};
if (argc == 2)
{
	if (atoi(argv[1]) < 0)
	{
	printf("0\n");
	return (0);
	}
	else
	{
			values = atoi(argv[1]);
			for (i = 0; i <= 5; i++)
			{
				if (values / n[i] > 0)
				{
					coins = coins + (values / n[i]);
					values = values % n[i];
				}
			}
			printf("%d\n", coins);
		}
}
else
{
	printf("Error\n");
	return (1);
}

return (0);
}
