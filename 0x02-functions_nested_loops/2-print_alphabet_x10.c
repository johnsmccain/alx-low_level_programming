#include "main.h"

/**
 * print alphabet x10: Checker descriptions
 * Descriptons: the function uses _putchar to print alphabet
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++){
		for (i = 'a'; i < 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
