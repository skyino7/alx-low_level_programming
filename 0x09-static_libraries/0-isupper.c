#include "main.h"

/**
 * _isupper - function
 *
 * @c: check character
 *
 * Return: 0 when successful, 1 when fails
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}