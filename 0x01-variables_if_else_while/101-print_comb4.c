#include <stdio.h>

/**
 * main - function
 *
 * Description - Write a program that prints all possible different
 * combinations of three digits.
 *
 * Return: 0 when successful
 */

int main(void)
{
	int dg1, dg2, dg3;

	for (dg1 = '0'; dg1 <= '9'; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 <= '9'; dg2++)
		{
			for (dg3 = dg2 + 1; dg3 <= '9'; dg3++)
			{
				putchar(dg1);
				putchar(dg2);
				putchar(dg3);

				if (dg1 < '7' || dg2 < '8' || dg3 < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
