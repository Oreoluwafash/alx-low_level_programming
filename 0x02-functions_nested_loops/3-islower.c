#include "main.h"
/**
 * Checks the lower case character
 *
 * Returns: Always 0 (Success)
 */
int main(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else if ( c < 97 && c > 122)
	{
		return(0);
	}
	_putchar('\n');
}
