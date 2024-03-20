#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - Returns the sum of two nb
 *op_sub - Returns the difference of two nb
 *op_mul - Returns the sum of two nb
 *op_div - Returns the division of two nb
 *op_mod - Returns the remainder of two nb
 *@a:first nb
 *@b:second nb
 *return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b  == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

