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
	
	operate = get_op_func(argv[2]);
	if (!(operate) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", operate(num1,num2));

	return (0);
}
