#include "main.h"
#include <stdio.h>

/**
 * _puts - function
 *
 * @str: char character
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\0');
}