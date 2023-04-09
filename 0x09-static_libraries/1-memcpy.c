#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: char type pointer
 * @src: char type pointer
 * @n: unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
