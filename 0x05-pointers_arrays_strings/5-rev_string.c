#include "main.h"

/**
 * rev_string - function
 *
 * @s: string reverse
 *
 */

void rev_string(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
