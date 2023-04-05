#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: number to return its natural square root
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int x)
{
	return (halp(x, 1));
}

/**
 * halp - recurses to find the natural
 * square root of a number
 * @i: number to calculate the square root of
 * @x: iterator
 * Return: the resulting square root
 */

int halp(int i, int x)
{
	int square;

	square = x * x;

	if (square == i)
		return (x);
	else if (square < i)
		return (halp(i, x + 1));
	else
		return (-1);
}
