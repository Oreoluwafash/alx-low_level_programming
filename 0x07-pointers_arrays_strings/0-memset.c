#include "main.h"
/**
 * _memset - fills memory with costant byte
 * @s: memory area
 * @b: constant myte
 * @n: bytes filled
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
