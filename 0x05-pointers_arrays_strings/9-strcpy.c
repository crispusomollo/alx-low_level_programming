#include "main.h"

/**
 * *_strcpy - copies a string
 * @dest: char type string
 * @src: char typr string
 * Description: copies a string pointed to src
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
