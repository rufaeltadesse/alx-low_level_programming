#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
	char *c;
	c = malloc(strlen("Best School") + 1);
	strcpy(c,"Best School");
	printf("%s", c);
}
