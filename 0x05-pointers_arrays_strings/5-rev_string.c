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
	int len, i;
	char l;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	for (i = 0; i < len; i++)
	{
		l = *(s + len);
		*(s + len) = *(s + i);
		*s(s + i) = 1;
		len--;
	}
}
