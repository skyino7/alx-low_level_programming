#include "main.h"

/**
 * positive_or_negative - Function
 *
 * @i: check number
 *
 * Return: 0 when successful
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}

}
