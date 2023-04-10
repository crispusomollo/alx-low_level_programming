#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the arguments
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
