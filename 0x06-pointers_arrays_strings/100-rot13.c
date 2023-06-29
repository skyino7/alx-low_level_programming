#include "main.h"

/**
 * rot13 - function
 *
 * @s: string
 *
 * Return: pointer
 *
 */

char *rot13(char *s)
{

	int c = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == alpha[i])
			{
				*(s + c) = rot13[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
