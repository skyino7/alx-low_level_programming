#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 when successfull
 *
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}

	putchar('\n');

	return (0);
}
