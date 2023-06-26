#include "main.h"
#include <string.h>

/**
 * rev_string - function
 *
 * @s: string reverse
 *
 */

void rev_string(char *s)
{
	int i = 0, j;
	int len = strlen(s);
	j = len - 1;

	while (i < j)
	{
		char ch = s[i];
		s[i] = s[j];
		s[j] = ch;

		i++;
		j--;
	}
}
