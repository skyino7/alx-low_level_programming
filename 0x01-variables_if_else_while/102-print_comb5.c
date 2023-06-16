#include <stdio.h>

/**
 * main - function
 *
 * description - Write a program that prints all possible combinations
 * of two two-digit numbers. The numbers should range from 0 to 99
 *
 * Return: 0 when successful
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			int tens = num1 / 10;
			int ones = num1 % 10;
			int tens2 = num2 / 10;
			int ones2 = num2 % 10;

			putchar(tens + '0');
			putchar(ones + '0');
			putchar(' ');
			putchar(tens2 + '0');
			putchar(ones2 + '0');
			
			if (num1 == 98 && num2 ==99)
			break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
