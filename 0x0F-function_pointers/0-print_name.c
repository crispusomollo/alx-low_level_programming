#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: name to be printed
 * p: pointer to the function
 */

void print_name(char *name, void (*p)(char *))
{
	if (!name || !p)
		return;
	p(name);
}
