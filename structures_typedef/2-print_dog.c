#include <stdio.h>
#include "dog.h"

/**
 * print_dog - fonction that prints the info of a dog
 * @d: name of sturct
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		if (d->age != 0)
			printf("Age: %f", d->age);
		else
			printf("Age: (nil)");
		if (d->name != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
	}
}
