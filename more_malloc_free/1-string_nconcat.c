#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenate 2strings
* @n: unsigned int
* @s1: Best
* @s2: School
* Return: return pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int n2 = n;
	char *ptr;
	int len1, len2;
/*je vérifie si les pointeurs s1 et s2 sont nuls*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*calcule la longueur de s1 et s2 en parcourant chaque caractère*/
	for (len1 = 0; s1[len1] != '\0'; len1++);
	for (len2 = 0; s2[len2] != '\0'; len2++);
/**Alloue de la mémoire pour stocker la concaténation s1 et s2.
 * Si n2 (qui représente n) >= à la longueur de s2,
 *  alors n2 = à la longueur de s2*/
	if (n2 >= len2)
	{
		n2 = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
/*s1 et s2 (len1 + len2 + 1 pour le caractère nul de fin)*/
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
/*len1 + n + 1 caractères, c'est-à-dire n caractères de s2 et toute la longueur de s1.*/
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
/**les caractères de s1 sont copiés dans ptr jusqu'à ce que toute la chaîne s1 soit copiée.
*  Ensuite, les n premiers caractères de s2
*(ou toute la chaîne if n > à la longueur de s2) sont copiés dans ptr,
*commençant à la position où s1 s'est arrêtée.*/
	for (j = 0; j < n2; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i++] = '\0';
	return (ptr);
}
