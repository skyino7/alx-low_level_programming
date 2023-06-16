#include <stdio.h>

/**
 * main - function
 *
 * Description - Print a -z but in reverse
 *
 * Return: 0 when successful
 */

int main(void)
{
	char re;

	for (re = 'z'; re >= 'a'; re--)
	{
		putchar(re);
	}

	putchar('\n');

	return (0);
}
