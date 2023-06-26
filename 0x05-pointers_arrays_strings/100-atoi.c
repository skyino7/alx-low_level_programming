#include "main.h"

/**
 * _atoi - function
 * 
 * @s: character
*/


int _atoi(char *s)
{
    unsigned int i = 0;

    while (s[i] == '\0')
        i++;

    if (s[i] == '-' || s[i] == '+')
        return 1;

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            return 0;
        i++;

        
    }
    return (0);
}
