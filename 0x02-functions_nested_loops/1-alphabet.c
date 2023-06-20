#include "main.h"

/**
 * print_alphabet - function
 *
 * Description: Write a function that prints the alphabet, in lowercase.
 *
 * Return: 0 when successful
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
