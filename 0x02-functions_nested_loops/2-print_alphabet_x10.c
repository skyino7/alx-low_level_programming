#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Description - Write a function that prints 10 times the alphabet,
 * in lowercase.
 *
 * Return: 0 when successful
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
