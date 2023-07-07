#include "main.h"
#include <endian.h>

/**
 * _strcpy - function
 *
 * @dest: pointer
 * @src: pointer source
 *
 * Return: dest;
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}