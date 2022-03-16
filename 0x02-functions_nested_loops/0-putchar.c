#include <unistd.h>
#include "main.h"
/**
 * main - check description
 * Description: It prints the word putchar, followed by a new
 * line
 * Return (0) if successful
 */
int main(void)
{
	int i = 0;

	char var[8] = "_putchar";

	for (; i < 8; i++)
		_putchar(var[i]);
	_putchar('\n');
	return (0);
}
