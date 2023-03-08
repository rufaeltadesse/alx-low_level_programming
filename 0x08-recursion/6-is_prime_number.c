#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - entry
 * @n: is a variable
 * Return: 0
 */
int is_prime_number(int n)
{
	return (checkprime(n, n - 1));
}
/**
 * checkprime - entry
 * @n: is a variable
 * @j: is a variable
 * Return: 0
 */
int checkprime(int n, int j)
{
	int value = 0;

	if (j != 0 && n != -1)
	value = n % j;
	if (value != 0 && j < 3)
		return (1);
	if (n == 1 || n == -1)
		return (0);
	else if (value == 0)
		return (0);
	else
		return (checkprime(n, j - 1));

}
