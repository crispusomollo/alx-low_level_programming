#include "main.h"

/**
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 * FYI: The standard library provides a similar function: memcpy. 
 * Run man memcpy to learn more.
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	for (x=0;x<n;x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
