#include "main.h"
#include <ctype.h>

/*
 * string converted to Uppercase
 * cap_string - converts string to uppercase
 * 
 * returns - the converted string
 */


char *cap_string(char *str)
{
    int i = 0;
    int difference = 'a' - 'A';

while (str[i] != '\0')
    {
if (str[i] >= 'a' && str[i] <= 'z')
    {
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '.')
    {
     str[i] -= difference;
    }
    }
	i++;
    }

    return (str);
}
