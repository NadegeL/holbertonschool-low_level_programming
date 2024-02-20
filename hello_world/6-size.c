#include <stdio.h>
/**
 * main - code to print size of types
 *
 * Return: Always 0
 */
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %zu bytes\n"sizeof(integerType));
	printf("Size of float:%zu bytes\n"sizeof(floatType));
 	printf("Size of double:%zu bytes\n"sizeof(doubleType));
	printf("Size of char:%zu bytes\n"sizeof(charType));

	return (0);
}
