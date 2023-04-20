#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all given parameters
 * 
 * @n: the number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int m;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
