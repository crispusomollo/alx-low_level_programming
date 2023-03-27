#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: int array type pointer
 * @n: int type integer
 * Description: numbers must be separated by comma followed by space
 * You are allowed to use 'printf'
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	b = 0;
	for (n--; n >= 0; n--, b++)
	{
		printf("%d", a[b]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
