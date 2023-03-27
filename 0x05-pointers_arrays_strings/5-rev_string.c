#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char array type string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, c;
	char d;

	for (a = 0; s[a] != 0; a++)
		;

	c = a;
	for (a--, b = 0; b < c / 2; a--, b++)
	{
		d = s[b];
		s[b] = s[a];
		s[a] = d;
	}
}
