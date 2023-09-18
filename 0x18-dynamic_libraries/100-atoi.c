#include "main.h"

/**
 * _atoi - function
 *
 * @s: character
 *
 * Return: integer
*/


int _atoi(char *s)
{
	int set = 0;
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			set++;
		}
		else if (*s >= 48 && *s <= 57)
		{
			i = i * 10 + (*s - 48);
		}
		else if (i > 0)
		{
			break;
		}
	}

	if (set % 2 != 0)
		return (i * -1);

	return (0);
}
