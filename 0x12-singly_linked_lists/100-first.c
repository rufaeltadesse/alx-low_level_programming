#include <stdio.h>
void printStatement(void) __attribute__ ((constructor));
/**
 * printStatement - main entry
 * Return: nothing
 */
void printStatement(void)
{
	printf("You're beat! and yet,");
	printf(" you must allow,\nI bore my house upon my back!\n");
}
