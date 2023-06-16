#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Function
 *
 * Description - Prints Positive or Negative
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is Zero\n", n);
	}

	return (0);
}