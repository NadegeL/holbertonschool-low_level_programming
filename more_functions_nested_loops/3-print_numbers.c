#include "main.h"
/**
 * print_numbers - numbers from 0 à 9.
 *@numbers:n
 * Return: Always 0.
 */

void print_numbers(void)

{
	char numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{

		_putchar(numbers);

	}
		_putchar('\n');

}



