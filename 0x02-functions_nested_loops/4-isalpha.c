#include "main.h"

/**
 * _isalpha - check main
 * Description: function for character validation
 * Return:  1 if c is lowercase or uppercase otherwise return 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++){
		
		for (upper = 'A'; upper <= 'Z'; upper++){

			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
