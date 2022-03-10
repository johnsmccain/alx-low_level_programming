#include <stdio.h>

/**
 * main - print the string in the printf function
 *
 * descriptions: main print the size of data types in c
 *Return:0
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %d byte(s)", sizeof(a));
	printf("Size of an int: %d byte(s)", sizeof(b));
	printf("Size of long int: %d byte(s)", sizeof(c));
	printf("Size of long long int: %d byte(s)", sizeof(d));
	printf("Size of float: %d byte(s)", sizeof(e));
	return (0);
}
