#include<stdio.h>
/* 
 * Size of variables
 */

int main() {
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;
	printf("Size of a char: %lu bytes\n", sizeof(charType));
	printf("Size of an int: %lu bytes\n", sizeof(intType));
	printf("Size of a long int: %lu bytes\n", sizeof(longIntType));
	printf("Size of a long long int: %lu bytes\n", sizeof(longLongIntType));
	printf("Size of a float: %lu bytes\n", sizeof(floatType));
	return 0;
}
