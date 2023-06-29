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
	int cap = 1, i;

	for (i = 0; strn[i] != '\0'; i++)
	{
		if (strn[i] == ' ' || strn[i] == '\t' || strn[i] == '\n' || strn[i] == ',' || strn[i] == ';' || strn[i] == '.' || strn[i] == '!' || strn[i] == '?' || strn[i] == '"' || strn[i] == '(' || strn[i] == ')' || strn[i] == '{' || strn[i] == '}') {
			cap = 1;
		}
		else if (isalpha(strn[i])) 
		{
			if (cap)
			{
				strn[i] = toupper(strn[i]);
				cap = 0;
			}
			else
			{
				strn[i] = tolower(strn[i]);
			}
		}
	}
	return (strn);
}
