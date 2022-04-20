#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - prints the reverse of a string
 * @s: Points to a string s
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = strlen(s);

	while (i - 1 >= 0)
	{
		int j = i - 1;

		putchar(*(s + j));
		i--;
	}
}
