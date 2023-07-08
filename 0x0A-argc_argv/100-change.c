#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success and 1 for failure
 */

int main(int argc, char *argv[])
{
	int i, j = 0, k;
	int array[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (k >= array[i])
		{
			k -= array[i];
			k++;
		}
	}
	printf("%d\n", j);
	return (0);
}