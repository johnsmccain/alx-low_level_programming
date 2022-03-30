#include "main.h"

/**
 * _puts_recursion(char *s) - function that prints a string follow
 * by a new line.
 * @s: input string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
}
