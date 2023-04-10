#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int y, z;
	int sum = 0;

	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z]; z++)
		{
			if (argv[y][z] < '0' || argv[y][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[y]);
	}

	printf("%d\n", sum);
	return (0);
}
