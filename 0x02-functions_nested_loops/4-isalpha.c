#include "main.h"
/**
 * _isalpha - function
 *
 * @c: compare values
 *
 * Return: 0 when successful
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
