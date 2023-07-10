#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 *
 * @str: string check
 *
 * Return: leng
 *
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *leng;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	leng = malloc(sizeof(char) * (i + 1));

	if (leng == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		leng[j] = str[j];
	}

	return (leng);
}
