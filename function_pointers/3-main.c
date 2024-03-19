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
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
int (*ptr)(int, int);
int result;

	if (argc != 4)
	{
		printf("error%s\n", argv[0]);
		exit(98);
	}
	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("error\n");
		exit(99);
	}
result = ptr(num1, num2);
printf("%d\n", result);

return (0);
}

