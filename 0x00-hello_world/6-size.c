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

	printf("Size of a char: %lu byte(s)",(unsigned long) sizeof(a));
	printf("Size of an int: %lu byte(s)",(unsigned long) sizeof(b));
	printf("Size of long int: %lu byte(s)",(unsigned long) sizeof(c));
	printf("Size of long long int: %lu byte(s)",(unsigned long) sizeof(d));
	printf("Size of float: %lu byte(s)",(unsigned long) sizeof(e));
	return (0);
}
