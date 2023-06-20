#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * init_dog - initialize a dog
  * @d: do structure
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
