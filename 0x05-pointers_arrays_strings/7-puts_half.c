#include "main.h"
#include <string.h>

/**
 * puts_half - function
 *
 * @str: prints half the words
 *
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int half = (len / 2) + 1;
	int s = half;

	int n;

	while (n >= 0)
	{
		if (str[n] == '\0')
			break;
		n++;
	}

	if (len % 2 == 1)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (n = s; n < len; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
