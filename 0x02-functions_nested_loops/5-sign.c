#include "main.h"

/**
 * print_sign - Check main
 * @n: An input number
 * Description: This function print the sign of the number
 * Return: +1 if the number is positive, 0 if the number is 0, or -1 if the number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
