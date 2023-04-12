#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments of
 * your program
 * @ac: int type
 * @av: char pointer to a pointer
 * Return: pointer to a new string,
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, len = 0;
	char *z;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;

	z = malloc(sizeof(char) * len + 1);
	if (z == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			z[c] = av[a][b];
			c++;
		}
		if (z[c] == '\0')
		{
			z[c++] = '\n';
		}
	}
	return (z);
}
