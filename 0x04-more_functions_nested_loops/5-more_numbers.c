#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, ch;
<<<<<<< HEAD

=======
	
>>>>>>> 9e83ad5fdfbeb7613db4ab12906216c5b8772389
	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + '0');
			}
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
