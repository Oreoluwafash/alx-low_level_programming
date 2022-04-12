#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * c: Character in ASCII
 *
 * Returns - 1 if its a letter either lower or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
