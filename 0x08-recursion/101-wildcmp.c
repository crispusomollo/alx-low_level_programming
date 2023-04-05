#include "main.h"

/**
 * wildcmp - compares two strings
 * @p: first string
 * @q: second string
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */

int wildcmp(char *p, char *q)
{
	if (*p == '\0')
	{
		if (*q != '\0' && *q == '*')
			return (wildcmp(p, q + 1));
		return (*q == '\0');
	}
	if (*q == '*')
		return (wildcmp(p + 1, q) || wildcmp(p, q + 1));
	else if (*p == *q)
		return (wildcmp(p + 1, q + 1));
	return (0);
}
