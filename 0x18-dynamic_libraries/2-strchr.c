#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: char type pointer
 * @c: char type character
 * Return: the character and NULL if not found
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
