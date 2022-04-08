<<<<<<< HEAD
`
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determines if a number is positive, negative or zero.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
>>>>>>> 0b8a6f7d3e042610de275562c6030b6c0e5a8a21
