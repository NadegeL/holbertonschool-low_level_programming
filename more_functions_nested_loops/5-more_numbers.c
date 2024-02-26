#include "main.h"
/**
 * more_numbers - Prints 10times the numbers from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i < 10 ; i++)
	{
		for (a = 0; a < 15 ; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
