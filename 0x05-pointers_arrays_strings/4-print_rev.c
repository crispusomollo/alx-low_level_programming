#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char type pointer
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		;
	for (a--; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
