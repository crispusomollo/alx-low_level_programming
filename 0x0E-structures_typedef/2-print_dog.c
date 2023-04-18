#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a fucntion that prints a struct dog
 * @y: struct name
 */

void print_dog(struct dog *y)
{
	if (y == NULL)
		return;

	if (y->name == NULL)
		y->name = "(nil)";
	if (y->owner == NULL)
		y->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", y->name, y->age, y->owner);
}
