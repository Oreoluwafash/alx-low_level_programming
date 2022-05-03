#include <stdio.h>
/**
 * main - prints the numbef of arguments passed into it
 * @argc: numer of command line arguments
 * @argv: array that contains the program commnad line arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
