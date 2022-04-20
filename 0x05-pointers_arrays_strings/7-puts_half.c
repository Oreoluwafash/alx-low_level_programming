#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints things
 * @str: pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = strlen(str);

	i = i - 1;

	int j;

	if (i % 2 != 0)
	{
		j = ((i - 1) / 2) + 1;
	}
	else
	{
		j = (i / 2) + 1;
	}
	while (j <= i)
	{
		putchr(*(str + j));
		j++;
	}
	putchar('\n');
}
