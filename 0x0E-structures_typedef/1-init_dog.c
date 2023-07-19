#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a struct variable.
 * @d: struct pointer.
 * @name: the name element to be init.
 * @age: the age element to be init.
 * @owner: the owner element to be init.
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}