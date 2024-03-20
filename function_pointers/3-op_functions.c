#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - addition
 *@a:nb to add
 *@b: nb to add
 *return: total op
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - soustraction
 *@a:nb tu sub
 *@b: nb to sub
 *return: total sub
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: nb to mul
 * @b: nb to mul
 * return: total multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: nb to divide
 * @b: nb to divide
 * return: total division
*/
int op_div(int a, int b)
{
	if (b  == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: nb to modulo
 * @b: nb to modulo
 * return: total modulo
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}

