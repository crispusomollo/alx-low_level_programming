#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - counts the number of words in a string
 * @s: the string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int p, q, r;

	p = 0;
	r = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] == ' ')
			p = 0;
		else if (p == 0)
		{
			p = 1;
			r++;
		}
	}
	return (r);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings on Success
 * or NULL on failure
 */

char **strtow(char *str)
{
	char **mat, *z;
	int p, q = 0, len = 0, words, r = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (r)
			{
				end = p;
				z = (char *) malloc(sizeof(char) * (r + 1));
				if (z == NULL)
					return (NULL);
				while (start < end)
					*z++ = str[start++];
				*z = '\0';
				mat[q] = z - r;
				q++;
				r = 0;
			}
		}
		else if (r++ == 0)
			start = p;
	}
	mat[q] = NULL;

	return (mat);
}
