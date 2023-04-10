#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of multiplication of two numbers
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	int mul = 1;

	if (argc == 3)
	{
		for (x = 1; x < argc; x++)
		{
			mul *= atoi(argv[x]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
