#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory
 * @str: string to make a duplicate of
 * Return: NULL if str = NULL and the string on success
 */

char *_strdup(char *str)
{
	unsigned int x, y;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
		;

	c = malloc(x * sizeof(*c) + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < x; y++)
	{
		c[y] = str[y];
	}
	c[x] = '\0';

	return (c);
}
