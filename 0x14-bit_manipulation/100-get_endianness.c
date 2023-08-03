#include "main.h"

/**
 * get_endianness - function
 * Return: 1 or 0
*/

int get_endianness(void)
{

	unsigned int value = 1;

	char *pt = (char *)&value;

	if (*pt == 1)
		return (1);
	else
		return (0);

}
