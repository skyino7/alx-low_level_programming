#include "main.h"

/**
 * _isdigit - function
 *
 * @c - checks number
 *
 * Return: 0 when sucessfull and 1 when failed
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
