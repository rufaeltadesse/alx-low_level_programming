#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %ld", sizeof(i));
    return (EXIT_SUCCESS);
}
