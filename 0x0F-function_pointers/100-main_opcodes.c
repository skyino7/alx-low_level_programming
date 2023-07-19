#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 when successful;
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *main_addr;

	main_addr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_addr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);

}
