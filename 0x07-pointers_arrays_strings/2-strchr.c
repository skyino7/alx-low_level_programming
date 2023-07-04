#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function
 *
 * @s: pointer
 * @c: pointer
 *
 * Return: NULL
 *
 */

char *_strchr(char *s, char c)
{
		while (*s)
		{
			if (*s != c)
				s++;
			else
				return (s);
		}

		if (c == '\0')
			return (s);


		return (NULL);
}
