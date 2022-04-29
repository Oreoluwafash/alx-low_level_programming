#include "main.h"
/**
 * factorial - searchs for a factorial of a number
 * @n: the number to find d factorial of
 * Return: the factorial number
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}
