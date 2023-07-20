#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function
 * @separator: separator
 * @n: numbers
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(list);
	char *str;
	unsigned int i;

	va_start(list, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}

		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}

	}

	printf("\n");
	va_end(list);

}
