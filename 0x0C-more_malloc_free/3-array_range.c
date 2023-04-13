#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the created array
 * or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *i;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	i = malloc(sizeof(*i) * size);
	if (i == NULL)
		return (NULL);

	for (j = 0; min <= max; j++, min++)
		i[j]= min;

	return (i);
}
