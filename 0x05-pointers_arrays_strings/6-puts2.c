#include "main.h"
#include <stdio.h>

/**
 * puts2 - function
 *
 * @str: prints every other character
 *
 */

void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[i]);
			i += 2;
		}
	}
	_putchar('\n');
}
