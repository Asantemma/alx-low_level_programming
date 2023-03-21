#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: initialized name of dog
 * @age: initialized age
 * @owner: initialized owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	*d.name = name;
	*d.age = age;
	*d.owner = owner;
}

