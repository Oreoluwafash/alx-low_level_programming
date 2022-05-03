#include <stdio.h>
/**
 * main - prints all arguments it recives
 * @argc: number of the command line arguments
 * @argv: array thtat contains program commnad line argumnets
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
