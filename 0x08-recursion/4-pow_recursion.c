#include "main.h"

/**
 * _pow_recursion - return the value of m raised to
 * the power of n
 * @m: integer to raise
 * @n: power the integer to be raised to
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int m, int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (m * _pow_recursion(m, n - 1));
}
