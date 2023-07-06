#include "main.h"

/**
 * wildcmp
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: 0 for successful and 1 failure
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
			return (1);

	if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	return (0);
}
