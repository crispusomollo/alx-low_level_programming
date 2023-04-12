#include <stdlib.h>

/**
 * *_strdup - returns a pointer 
 * to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: NULL if str = NULL else return the string
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
