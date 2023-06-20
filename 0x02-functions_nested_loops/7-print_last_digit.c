#include "main.h"

/**
 * print_last_digit - printing last digit
 * @b: number to be compared
 *
 * Return: 0 when successful and 1 when failed
 */

int print_last_digit(int b)
{
	int i;

	if (b >= 0)
		i = b % 10;
	else
		i = -1 * (b % 10);
	_putchar('0' + i);

	return (i);
}
