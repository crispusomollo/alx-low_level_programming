#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if the string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_helper(s, 0, get_length(s)));
}

/**
 * get_length - gets the length of the string
 * @s: the string
 * Return: length of the string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + get_length(s + 1));
}

/**
 * _helper - recursive check of palindrome
 * @s: a string
 * @a: an iterator
 * @b: the length of the string
 * Return: 1 if the string is palindrome otherwise 0
 */

int _helper(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
		return (0);
	if (a >= b)
		return (1);
	return (_helper(s, a + 1, b - 1));
}
