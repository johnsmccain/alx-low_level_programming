#include "main.h"
/**
 * _islower - check Betty
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase
 * Return: 1 if is lowercase and 0 if is uppercase
 */
int _islower(int c)
{
	char a;
	int val;

	for (a = 'a'; a <= 'z'; a++){
		if (c == a)
			return (1);
	}
	return (0);
}

