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
	
	for (n = s; n < len; n++)
    {
        _putchar(str[n]);
    }

	_putchar('\n');
}
