#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/*
 *print_strings - print str.
 *all: liste.
*/
void print_string(va_list all)
{
	char *string;

	string = va_arg(all, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/*
 * print_char: char.
 *@all: format liste
*/
void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}
/*
 * print_int : int
 * @all:liste
 * Return: new line
*/
void print_int(va_list all)
{
	printf("%d", va_arg(all, int));
}
/*
 * print_float - float.
 * @all: liste.
*/
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/*
 * print_all: all format.
 *@format: all forms.
*/
void print_all(const char * const format, ...)
{
	va_list all;
	const char *separator = "";
/**
 * struct print_form - print all format.
 * @char: ptr to char.
 * @f: member.
 * @c: member.
*/
struct print_form
{
	const char *c;
	void (*f)(va_list);
}
struct print_form array[] = {
	{"s", print_string},
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	};
	int i, j;

	va_start(all, format);
	i = 0;
	separator = "";
		while (format != NULL && format[i] != '\0')
		{
			j = 0;
			while (j < 4)
			{
				if (format[i] == *array[j].c)
				{
					printf("%s", separator);
					array[j].f(all);
					separator = ", ";
					break;
				}
			j++;
			}
		i++;
		}
	printf("\n");
	va_end(all);
}

