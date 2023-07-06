#include "main.h"
#include <stdio.h>

/**
 * prime - function
 * @n: integer
 * @o: integer
 *
 * Return: 0 for success, 1 for failure
 *
 */

int prime(int n, int o);

int prime(int n, int o)
{
	if (o >= n && n > 1)
	{
		return (1);
	}
	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime(n, o + 1));
}

/**
 * is_prime_number - function returns 1 for prime and otherwise 0
 *
 * @n: integer check
 *
 * Return: prime
 *
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
