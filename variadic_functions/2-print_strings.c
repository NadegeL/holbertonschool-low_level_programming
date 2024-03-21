#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - print str
 *@n: unsigned int
 *@separator: strg of char
 *Return: new line
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);

for (i = 0; i < n; i++)
{
	string = va_arg(str, char *);
	printf("%s", string ? string : "(nil)");
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");

va_end(str);

}
