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
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			d->age = 0;
			printf("Age: %f\n", d->age);
		if (d->name != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
