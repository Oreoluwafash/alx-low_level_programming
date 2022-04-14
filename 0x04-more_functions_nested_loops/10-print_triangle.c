#include "main.h"

/**
 * print_triangle - function that prints a square, followed by new line
 * @size: Size of triangle
 * Return: noting
 */
void print_triangle(int size)
{
	int row, col, aux;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			aux = (size - row) - 1;
			if (col < aux)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
}