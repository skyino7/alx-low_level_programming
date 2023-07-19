#include <stdio.h>
#include <stdlib.h>

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

	void *main_addr = &main;
	unsigned char *opcodes = (unsigned char *)main_addr;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}

	printf("\n");

	return (0);

}
