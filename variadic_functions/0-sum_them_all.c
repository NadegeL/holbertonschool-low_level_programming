#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of all its parameter
 *@n: unsigned int
 *
 *Return: sum
 *
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list functions;
	unsigned int i, sum = 0;

	va_start(functions, n);

	for (i = 0; i < n; i++)
		sum += (int) va_arg(functions, int);

	va_end(functions);
	return (sum);
}
