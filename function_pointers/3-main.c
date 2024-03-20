#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - appel de commandes
 * @argc:..
 * @argv:..
 *
 * return: zero
*/

int main(int argc, char *argv[])
{
int result, num1, num2;
char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
ptr = argv[2];
	if ((num1 == 0 && *argv[1] != '0') || (num2 == 0 && *argv[3] != '0'))
	{
		printf("Error\n");
		exit(98);
	}
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
result = get_op_func(ptr) (num1, num2);
printf("%d\n", result);

return (0);
}

