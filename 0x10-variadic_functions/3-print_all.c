#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints function
 * @format: list of arguments
 */

void print_all(const char * const format, ...)
{
	
	va_list list;
	unsigned int i = 0;
	char *str;
	int numb;
	char c;
	float f;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				numb = va_arg(list, int);
				printf("%i", numb);
				break;
			case 'f':
				f = va_arg(list, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}

	va_end(list);
	printf("\n");

}
