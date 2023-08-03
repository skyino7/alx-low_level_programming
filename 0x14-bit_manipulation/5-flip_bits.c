#include "main.h"

/**
 * flip_bits - function
 * @n: number
 * @m: number
 * Return: count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res)
	{
		count += res & 1;
		res >>= 1;
	}

	return (count);

}
