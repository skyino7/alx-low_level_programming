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
	int len, i, n = 0;

	len = strlen(dest);

	while (len != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);

}
