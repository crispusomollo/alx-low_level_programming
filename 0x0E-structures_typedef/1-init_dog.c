#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @s: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *s, char *name, float age, char *owner)
{
	if (s == NULL)
	{
		s = malloc(sizeof(struct dog));
		if (s == NULL)
			return;
	}

	s->name = name;
	s->age = age;
	s->owner = owner;
}
