#include "main.h"
/**
 * print_most_numbers - numbers from 0 à 9.
 * Return: Always 0.
 */

void print_most_numbers(void)

{
	int numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		if (numbers != '2' && numbers != '4')
		_putchar(numbers);
	}
		_putchar('\n');

}
