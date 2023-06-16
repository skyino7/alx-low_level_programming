#include <stdio.h>

/**
 * main - function
 *
 * description - Write a program that prints all possible different
 * combinations of two digits
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i < '8' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
