#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code to put a message
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d and is %d greater than 5\n",
		n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d and is %d 0\n",
		n, n % 10);
	}
	else
	{
		printf("Last digit of %d and is %d less than 6 and not 0\n",
		n, n % 10);
	}

	return (0);
}
