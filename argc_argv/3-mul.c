#include <stdio.h>
#include <stdlib.h>

/**
* main - fonction pour compter les args
* @argc: compteur
* @argv: chaine de caractères
* inclure stdlib pour commande 'ATOI'
* Return: 1.
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
