#include "main.h"

/**
 * _pow_recursion - function
 *
 * @x: integer
 * @y: integer
 *
 * Return: 0 success, 1 failed
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
