#include "main.h"

/**
 * leet - function
 *
 * @s: char
 *
 * Return: char s
 */

char *leet(char *s)
{
	char rep[10] = "4433007711";
	char let[10] = "aAeEoOtTlL";
	int j, l = 0;

	while (s[l] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[l] == let[j])
			{
				s[l] = rep[j];
				break;
			}
		}
		l++;
	}
	return (s);
}
