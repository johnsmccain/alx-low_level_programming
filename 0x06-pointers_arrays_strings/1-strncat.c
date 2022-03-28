#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the result.
 */
int _strlen(char *c);
char *_strncat(char *dest, char *src, int n)
{
	int destlength = _strlen(dest);
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlength + i] = src[i];
	dest[destlength + 1] = '\0';

	return (dest);

int _strlen(char *c)
{
	int len = 0;

	while (c[len] != '\0')
		len++;
	return (len);
}
