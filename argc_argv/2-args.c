#include <stdio.h>
/**
* main - fonction pour compter les arg
* @argc: compteur
* @argv: chaine de caractères
*
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}

