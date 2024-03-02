#include "main.h"

/*
* string converted to Uppercase
* string_toupper - convertes char in uppercase
*
* return 0
*/
char *string_toupper(char *)
{
	char str[] = "Look up!\n";
char *ptr;
	char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return ('str');
}


