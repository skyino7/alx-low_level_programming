#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 when successful
 */

int main(void)
{
	int cnt = 3;

	long int fs = 1, sn = 2;
	long int nx = fs + sn;

	printf("%lu, ", fs);
	printf("%lu, ", sn);

	while (cnt <= 50)
	{
		if (cnt == 50)
		{
			printf("%lu \n", nx);
		}
		else
		{
			printf("%lu, ", nx);
		}

		fs = sn;
		sn = nx;

		nx = fs + sn;
		cnt++;
	}
	return (0);
}
