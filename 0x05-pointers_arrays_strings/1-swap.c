#include "main.h"

/**
 * swap_int - function
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: 0 when successfull, 1 failed
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;

}
