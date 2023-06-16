#include <stdio.h>

/**
 * main - function
 *
 * description -  program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0 when successful
 */

int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');

		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
