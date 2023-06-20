#include "main.h"

/**
 * _abs - function
 *
 * @b: The integer to print
 *
 * Return: 0 when successful
 */

int _abs(int b)
{
	if (b > 0)
	{
		return (b * (-1));
	}
	else if (b == 0)
	{
		return (0);
	}
	else
	{
		return (b);
	}
}
