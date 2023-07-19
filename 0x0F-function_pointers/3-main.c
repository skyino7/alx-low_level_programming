#include "3-calc.h"

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operate = get_op_func(argv[2]);

	if (operate == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", operate(num1,num2));

	return (0);
}
