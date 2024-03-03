#include "main.h"
#include <ctype.h>

/*
 * string converted to Uppercase
 * cap_string - converts string to uppercase
 * string - input string
 * returns - the converted string
 */


char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
    {
if (islower(str[i]))
    {
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '.')
    {
    str[i] = toupper(str[i]);
    }
    }
i++;
    }
return (str);
}
