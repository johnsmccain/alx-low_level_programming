#include "main.h"

/**
 * print_rev - a function that print a string in reverse,
 * followed by a new line.
 * @s: string parameter
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\n')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
