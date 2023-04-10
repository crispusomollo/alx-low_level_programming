#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
