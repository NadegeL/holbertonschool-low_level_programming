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
/* Boucle à travers les n premiers arguments*/
for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(functions, int));
/*Vérifie si ce n'est pas le dernier argument*/
	if (i != (n - 1) && separator != NULL)
/*si le séparateur est défini printf("%s", separator)*/
	printf("%s", separator);
/*Si c'est le cas, affiche le séparateur*/
	}
printf("\n");

va_end(functions);
}
