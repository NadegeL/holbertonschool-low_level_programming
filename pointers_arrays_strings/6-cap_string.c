#include "main.h"
#include "ctype.h"

/*
* string converted to Uppercase
* cap_string - convertes string in uppercase
*string'look up'
* return 0
*/
char *cap_string(char *str)
{
int i = 0;
    /* Capitaliser la première lettre de la chaîne*/
str[0] = toupper(str[0]);

    /* Parcourir la chaîne caractère par caractère*/
while (str[i] != '\0')
{
/* Si le caractère actuel est un espace, un tiret ou un point, alors*/
/* capitaliser le prochain caractère s'il s'agit d'une lettre*/
if (str[i] == ' ' || str[i] == '-' || str[i] == '.')
	{
if (isalpha(str[i + 1]))
	{
str[i + 1] = islower(str[i + 1]);
	}
}
i++;
}

return (str);
}
