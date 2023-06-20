#include "main.h"
/**
 * _islower - description
 *
 * @c: compared value
 *
 * Return: 0 when successful
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
