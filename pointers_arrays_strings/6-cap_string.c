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

if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = str[0] - 32;
}
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '-' || str[i] == '.')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = str[i + 1] - 32;
}
}
i++;
}

return (str);
}
