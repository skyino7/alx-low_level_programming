#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: string
 * @s2: string
 * @n: number of bytes
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int leng = n, i = 0;;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
		leng++;
	}

	string = malloc(sizeof(char) * (leng + 1));

	if (string == NULL)
		return (NULL);

	leng = 0;

	for (i = 0; s1[i]; i++)
	{
		string[leng++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		string[leng++] = s2[i];
	}

	string[leng] = '\0';

	return (string);
}
