#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 when success and 1 when failed
 */

int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}
	printf("%ld\n", num);

	return (0);
}
