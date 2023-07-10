#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: string 1
 * @s2: string 2
 * Return: str
*/

char *str_concat(char *s1, char *s2)
{
char *str;
unsigned int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
	{
		str[j] = s1[j];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		str[j] = s2[i];
		j++;
	}
return (str);
}
