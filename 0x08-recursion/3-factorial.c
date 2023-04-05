#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to return it's factorial
 * Return: -1 if n is less than 0
 * and the factorial of the number if n is greater than
 * or equal to 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
