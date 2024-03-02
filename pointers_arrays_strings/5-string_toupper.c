#include "main.h"

/*
* string converted to Uppercase
* string_toupper - convertes char in uppercase
*string'look up'
* return 0
*/
char *string_toupper(char *str)
{
	char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return str;
}


