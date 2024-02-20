#include <stdio.h>
/**
 * main - code to print size of types
 *
 * Return: Always 0
 */
int main(void)
{

	printf("Size of int: %zu bytes\n", sizeof(integerType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
 	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

	return (0);
}
