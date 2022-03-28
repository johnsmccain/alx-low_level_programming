#include "main.h"

/**
<<<<<<< HEAD
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
=======
*_strncat - Funtion
*
*@dest: Destiny
*@src: Source
*@n: Variable
*Return: Destiny
*/
/**------------------Hello------World--1||1024*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int r = 0;
	int tam = 0;

	for (; dest[tam];)
	{
		tam++;
	}

	while (r < n && src[r])
	{
		dest[tam + i] = src[r];
		i++;
		r++;
	}
	return (dest);
>>>>>>> ed6b4c268fc53b38a64d2670f4158fdc8ff2b191
}
