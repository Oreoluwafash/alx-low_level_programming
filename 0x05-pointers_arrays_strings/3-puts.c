#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string, followed by a new line
 * @str: input string
 * Return: no return
 */

void _puts(char *str)
{
	int size = strlen(str);

	int i = 0;

	while (i < size)
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
