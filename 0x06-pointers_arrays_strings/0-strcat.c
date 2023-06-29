#include "main.h"
#include <string.h>

/**
 * _strcat - function
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}

	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}

	*end = '\0';

	return (dest);

}
