#include "main.h"

/**
 * _strspn - function
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: l;
 */

unsigned int _strspn(char *s, char *accept)
{
	int l = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					l++;
			}
		}
		else
			return (l);
	}
	return (l);
}