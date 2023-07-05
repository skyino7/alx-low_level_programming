#include "main.h"

/**
 * factorial - function
 *
 * @n: pointer
 *
 * Return: 0 when success, 1 for failure
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
