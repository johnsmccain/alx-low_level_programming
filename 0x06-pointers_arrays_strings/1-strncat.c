#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the result.
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		scr++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *str++;

	*dest = '\n';
	return (temp);
}
