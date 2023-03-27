#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: char array type pointer
 * Description: if odd, print (length - 1) / 2
 * Return: void
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
