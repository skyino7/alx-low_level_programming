#include "main.h"

/**
 * print_binary - function
 * @n: number
*/

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int bit = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (bit - 1);
	int flag = 0;

	for (i = 0; i < bit; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
			mask >>= 1;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
