#include "main.h"
/**
 * _sqrt_recursion - entry
 * @n: is a variable
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
/**
 * squreroot -  entry
 * @n: is a variable
 * @b: is a variable
 * Return: 0
 */
int squareroot(int n, int b)
{
	int value = b * b;

	if (n == value)
	return (b);
	else if  (value > n)
	return (-1);
	else
	return (squareroot(n, b + 1));
}
