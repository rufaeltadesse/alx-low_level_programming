#ifndef STDDEF
#define STDDEF
#include <stddef.h>
#endif
#ifndef PRINTNAME
#define PRINTNAME
void print_name(char *name, void (*f)(char *));
#ifndef PRINTNAME1
#define PRINTNAME1
void array_iterator(int *array, size_t size, void (*action)(int));
#ifndef PRINTNAME2
#define PRINTNAME2
int int_index(int *array, int size, int (*cmp)(int));
#endif

