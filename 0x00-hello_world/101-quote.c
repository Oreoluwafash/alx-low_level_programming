#include<unistd.h>
/**
 * main - This is main
 *
 * Return: End point is giving 1 today
 */
int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, st, 59);
	return (1);
}
