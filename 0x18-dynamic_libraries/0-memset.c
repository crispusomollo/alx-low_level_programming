#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * Description: fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: char type pointer
 * @b: char type character
 * @n: unsigned int type
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
