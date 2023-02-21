#include "main.h"
/**
 * add - Entry
 * Return: 0
 */
int add(int a,int b)
{
	int sum = a + b;
	int firstDigit,lastDigit;
	if (sum > 9)
	{
		lastDigit = sum % 10;
		firstDigit = sum;
		while (firstDigit >= 10)
			firstDigit = firstDigit / 10;
		_putchar(firstDigit);
		_putchar(lastDigit);
		return (sum);
	}
	else
	{
		_putchar(sum);
		return (sum);
	}
}
