#include <stdio.h>
/**
 * main - function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int a, b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b = b + a;
		}
	}
	printf("%d\n", b);
	return (0);

}
