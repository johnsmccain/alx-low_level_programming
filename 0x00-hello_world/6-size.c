#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %ld byte(s)", sizeof(a));
	printf("Size of an int: %ld byte(s)", sizeof(b));
	printf("Size of long int: %ld byte(s)", sizeof(c));
	printf("Size of long long int: %ld byte(s)", sizeof(d));
	printf("Size of float: %ld byte(s)", sizeof(e));
	return (0);
}
