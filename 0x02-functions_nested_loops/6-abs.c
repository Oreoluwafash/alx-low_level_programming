#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 *
 * @i: input number as integer
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
