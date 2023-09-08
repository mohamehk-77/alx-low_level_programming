#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: 1
 * @av: 2
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *dulx;
	int i, j, cont;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, cont = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, cont++)
			;
		cont++;
	}
	cont++;

	a = malloc(cont * sizeof(char));
	if (a == NULL)
		return (NULL);

	dulx = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (dulx);
}
