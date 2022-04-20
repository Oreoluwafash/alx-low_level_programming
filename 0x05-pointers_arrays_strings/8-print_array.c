#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: input array
 * @n: input elements
 * Return: nothing
 */
void print_array(int *a, int b)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
