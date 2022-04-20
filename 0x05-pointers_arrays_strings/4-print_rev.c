#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i - 1 >= 0)
	{
		int j = i - 1;

		putchar(*(s + j));
		i--;
	}
	putchar('\n');
}
