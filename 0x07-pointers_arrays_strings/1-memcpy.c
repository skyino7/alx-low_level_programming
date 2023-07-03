#include "main.h"

/**
 * _memcpy - function
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cdest = dest;
	char *csrc = src;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}
