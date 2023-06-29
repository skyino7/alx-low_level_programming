#include "main.h"
#include <ctype.h>

/**
 * cap_string - function
 *
 * @strn: string
 *
 * Return: str 
 */

char *cap_string(char *strn)
{
	
	int i, c = 0;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(strn + c) >= 97 && *(strn + c) <= 122)
		*(strn + c) = *(strn + c) - 32;
	c++;

	while (*(strn + c) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(strn + c) == sep[i])
			{
				if ((*(strn + (c + 1)) >= 97) && (*(strn + (c + 1)) <= 122))
					*(strn + (c + 1)) = *(strn + (c + 1)) - 32;
				break;
			}
		}
		c++;
	}

	return (strn);
}
