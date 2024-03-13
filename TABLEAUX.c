#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
int i;
	/*indice qui va parcourir le tableau*/

char tab[5] = {'s', 'a', 'l', 'u', 't'};
	/*variable qui annonce le tableau*/

for (i = 0; tab[i]; i++)
	/*fonction pour parcourir le tableau:
	Pour 'i'=0 -> 'i' va ds le tableau-> 'i'(++ incrémentation) parcours les cases du tableau*/

printf("adresse à l'indice %d = %p\n", i, &tab[i]);
	/* affiche adresse de'i'(%d) pointée dans le tableau(%p)*/
}
