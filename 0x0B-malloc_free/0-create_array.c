#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of chars,
 * and initialize it with a specific char
 * @size: size of the array
 * @c: char to initialize
 * Return: 0 if success, NULL if size is equal to 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *v;

	u = 0;
	if (size == 0)
	{
		return (NULL);
	}

	v = malloc(sizeof(*v) * size);

	if (v == NULL)
		return (NULL);

	while (u < size)
	{
		*(v + u) = c;
		u++;
	}

	return (v);
}
