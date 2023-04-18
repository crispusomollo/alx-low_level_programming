#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_trait;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_trait *new_dog(char *name, float age, char *owner);

void free_dog(dog_trait *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif