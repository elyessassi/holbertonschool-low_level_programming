#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - foncttion that frees dogs
 * @d: structure
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
