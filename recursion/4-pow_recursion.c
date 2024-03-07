#include "main.h"
/**
 *_pow_recursion -  returns the value of x raised to the power of y.
 *@x: raised the power of y
 *@y: puissance au carré
 *Return: 0
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
