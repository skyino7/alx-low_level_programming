#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 *
 * Description: This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order to print
 * the last digit of the number stored in the variable n.
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;

	/*printf("random number %d\n", n);*/
	/*printf("digits %d\n", d);*/

	if (d > 5)
	{
		printf("Last digit of %d and is %d greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d and %d and is 0\n", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}

	return (0);
}
