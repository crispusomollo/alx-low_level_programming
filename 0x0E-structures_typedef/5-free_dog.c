#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @f: struct to free
 */

void free_dog(dog_t *f)
{
	if (f)
	{
		free(f->name);
		free(f->owner);
		free(f);
	}
}
