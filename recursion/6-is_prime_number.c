#include "main.h"
/**
 *is_prime_number -   that returns 1 if the input integer is a prime number.
 *@n: nombre premier
 *
 *Return: 1 if the input integer is a prime number, otherwise return 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)/*Check if n=1 or n=0*/
	{
		return (0);
	}
	if (n == 2)/*Check if n=2 */
	{
		return (1);
	}  /*Check whether n is divisible by 2 or 3 or 5*/
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
	{
		return (0);
	}
	else if (n % 9 == 0 || n % 7 == 0)/*Check n is divisible by 9 or 7*/
	{
		return (0);
	}
	else
		return (1);
}
