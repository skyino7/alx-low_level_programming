#include "main.h"

/**
 * _puts_recursion - function
 *
 * @s: pointer
 *
 * Return: when successful
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
		_putchar(*s);
	_puts_recursion(s + 1);
}
