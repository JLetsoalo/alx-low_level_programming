#include <stdio.h>
#include "dog.h"

/**
 * init_dog - starts a variable of type struct dog
 * @d: a variable of dog
 * @name: member(name of dog)
 * @age: member(age of dog)
 * @owner: member(dog owner name)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
