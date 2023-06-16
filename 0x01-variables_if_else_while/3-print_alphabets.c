#include <stdio.h>
/**
 * main - function
 *
 * Description - Write a program that prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: 0 when successful
 */

int main(void)
{
	char aplha;

	for (aplha  = 'a'; aplha <= 'z'; aplha++)
	{
		putchar(aplha);
	}

	for (aplha  = 'A'; aplha <= 'Z'; aplha++)
	{
		putchar(aplha);
	}

	putchar('\n');

	return (0);
}
