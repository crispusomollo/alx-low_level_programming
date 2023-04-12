#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @g: first string
 * @h: second string
 * Return: NULL if the string is empty or
 * the pointer to the string
 */

char *str_concat(char *g, char *h)
{
	char *v;
	int w, x, y, z;

	if (g == NULL)
	{
		g = "";
	}
	if (h == NULL)
	{
		h = "";
	}

	for (w = 0; g[w] != '\0'; w++)
		;
	for (x = 0; h[x] != '\0'; x++)
		;

	v = malloc((w * sizeof(*g)) + (x * sizeof(*h)) + 1);
	if (v == NULL)
	{
		return (NULL);
	}

	for (y = 0, z = 0; y < (w + x + 1); y++)
	{
		if (y < w)
			v[y] = g[y];
		else
			v[y] = h[z++];
	}

	return (v);
}
