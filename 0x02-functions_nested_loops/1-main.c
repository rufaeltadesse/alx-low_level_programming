#include "main.h"
/**
 * printalphabet - program entry
 * Desc - printes all alphabet
 */
void print_alphabet (void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar ('\n');
}
