#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - fonction that inistializes struct
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
