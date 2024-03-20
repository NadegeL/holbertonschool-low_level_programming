#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - print nb
 *@n: unsigned int
 *@separator: strg of char
 *Return: new line
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list functions;
unsigned int i;

va_start(functions, n);

for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(functions, int));
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
printf("\n");

va_end(functions);
}
