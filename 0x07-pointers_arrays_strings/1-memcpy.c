#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: DESTINATION MEMORY AREA
 * @src: SOURCE MEMORYAREA
 * @n: BYTE FILLED
 * Return: THE POINTER
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
