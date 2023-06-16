#include <stdio.h>

/**
 * main -function
 *
 * Description
 *
 * Return: 0 when successful
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
