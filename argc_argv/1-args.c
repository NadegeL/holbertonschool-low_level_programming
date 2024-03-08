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
	argv[0] ="";
	if (argc == 1)
	printf("0\n");
	else
	printf("%d\n", argc -1);
return('0');
}

