#include <stdio.h>
/**
 * main - code to print size of types
 *
 * Return: Always 0
 */
int main(void)
{

	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
 	printf("Size of double: %ld byte(s)\n", sizeof(double));
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));

	return (0);
}
