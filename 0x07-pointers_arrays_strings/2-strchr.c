#include "main.h"

/**
 * _strchr - function
 *
 * @s: pointer
 * @c: pointer
 *
 * Return: 0
 *
 */

char *_strchr(char *s, char c)
{
		while (*s != '\0')
		{
			if (*s == c)
				return (s);
			s++;
		}
		return (0);
}
