#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function
 *
 * @haystack: string search
 * @needle: string search
 *
 * Return: NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}

return (NULL);

}
