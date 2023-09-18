#include <stdio.h>
#include "main.h"

/**
 * _abs - function
 *
 * @n: The integer to print
 *
 * Return: 0 when successful
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}