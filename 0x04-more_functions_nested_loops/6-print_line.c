#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: Character
 * Return: 0 or 1
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n')
	}
	else
	{
		_putchar('\n');
	}
}
