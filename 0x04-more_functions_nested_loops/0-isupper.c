#include "main.h"

/**
 * _isupper - Checker main
 * Descriptions: the function uses puchar to print alphabets
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char letter;
	int i;
	int num = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			num = 1;
	}

	return (num);
}
