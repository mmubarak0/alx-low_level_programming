#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * new_dog - create a new dog type
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: dog instance
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a = malloc(sizeof(dog_t));

	if (a == NULL)
	{
		return (NULL);
	}

	if (name == NULL || owner == NULL)
	{
		free(a);
		return (NULL);
	}

	a->name = malloc(strlen(name) + 1);
	if (a->name == NULL)
	{
		free(a->name);
		free(a);
		return (NULL);
	}
	a->owner = malloc(strlen(owner) + 1);
	if (a->owner == NULL)
	{
		free(a->owner);
		free(a);
		return (NULL);
	}
	strcpy(a->name, name);
	if (a->name == NULL)
	{
		free(a->name);
		free(a);
		return (NULL);
	}
	a->age = age;
	strcpy(a->owner, owner);
	if (a->owner == NULL)
	{
		free(a->owner);
		free(a);
		return (NULL);
	}

	return (a);
}
